#include <stdio.h>

/*Display Array*/
void displayArray(int num[], int numberInt){
	int i=0;
	for(i; i<numberInt; i++){
		printf("\t%d\t", num[i]);
	}
}
/*Arrange in Ascending order array*/
void bubbleSortAscending(int num[], int numberInt){
	int i=0, f, temp;
	for(i; i<numberInt; i++){
		for(f=numberInt-1; f>i; f--){
			if(num[f]<num[f-1]){
				temp=num[f];
				num[f]=num[f-1];
				num[f-1]=temp;
			}
		}
	}
}
/*Arrange in Descending order array*/
void bubbleSortDescending(int num[], int numberInt){
	int i=0, f, temp;
	for(i; i<numberInt; i++){
		for(f=i+1; f<numberInt; f++){
			if(num[i]<num[f]){
				temp=num[i];
				num[i]=num[f];
				num[f]=temp;
			}
		}
	}
}
/*ComputeTotal*/
int computeTotal (int num[], int numberInt){
	int i, total=0;
	for (i=0; i<numberInt; i++){
		total+=num[i];
	}
	return total;	 
}
/*Display Negative Numbers*/
void displayNegative (int num[], int numberInt){
	int i;
	for (i=0; i<numberInt; i++){
		if (num[i]<0){
			printf("%d\t", num[i]);
			}	 	 
	}
}
/*Display Positive Numbers*/
void displayPositive (int num[], int numberInt){
	int i;
	for (i=0; i<numberInt; i++){
		if (num[i]>0){
			printf("%d\t", num[i]);
			}
	}
}
/*Count Positive Numbers*/
int countPositive (int num[], int numberInt){
	int i, countPos=0;
	for (i=0; i<numberInt; i++){
		if (num[i]>0){
			countPos++;	  	 
	}
	}
	return countPos;		
}
/*Count Negative Numbers*/
int countNegative (int num[], int numberInt){
	int i, countNeg=0;
	for (i=0; i<numberInt; i++){
		if (num[i]<0){
			countNeg++;	  	 
	}
	}
	return countNeg;		
}
/*MAIN*/
int main (){
	int number[100], numInt, i;
	
	printf("How many integers you want to place inside the array? ");
	scanf("%d", &numInt);
	
	for(i=0; i<numInt; i++){
		printf("number[%d]: ",i);
		scanf("%d", &number[i]);
	}
	
	printf("Display the values inside the array: ");
	displayArray(number, numInt);
	
	printf("\nValues in ascending order: ");
	bubbleSortAscending(number,numInt);
	displayArray(number, numInt);
	
	printf("\nValues in descending order: ");
	bubbleSortDescending(number,numInt);
	displayArray(number, numInt);
	
	printf("\nTotal of the values inside the array: %d",computeTotal(number, numInt)); 
	printf("\nNegative numbers: ");
	displayNegative(number, numInt);
	printf("\nPositive numbers: ");
	displayPositive(number, numInt);
	printf("\nCount of Positive numbers: %d", countPositive(number, numInt));
	printf("\nCount of Negative numbers: %d", countNegative(number, numInt));

	return 0;
}



