/*Breakout Session 2 - C Program

	Programmer: Vannessa Ruth A. Navarez
	Date: December 15, 2021
*/


#include <stdio.h>

/*Display Values*/
void displayValues(int num[], int numberInt){
	int i=0;
	for(i; i<numberInt; i++){
		printf(" %d\t", num[i]);
	}
}
/*Arrange in Ascending order array*/
void ascendingOrder(int num[], int numberInt){
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
/*Count Positive Odd Numbers*/
int countPosOdd (int num[], int numberInt){
	int i, countPosOdd=0;
	for (i=0; i<numberInt; i++){
		if (num[i]>0 && num[i]%2!=0){
			countPosOdd++;	 	
	}
	}
	return countPosOdd;	   	   
}
/*ComputeSumOdd*/
int computeSumOdd (int num[], int numberInt){
	int i, sumOdd=0;
	for (i=0;i<numberInt;i++){
		if (num[i]%2!=0)
		sumOdd+=num[i];
	}
	return sumOdd;	  
}

int largestPositive(int num[], int numberInt){
    int i;
    int max=0, temp=0;
    for (i=0;i<numberInt;i++){
        if (num[i]>temp){
	   		temp=num[i];
            max = num[i];
        }
 	}
    return max;
}
/*MAIN*/
int main (){
	int number[100], numInt=5, i;
	
	for(i=0; i<numInt; i++){
		printf("Number[%d]: ",i);
		scanf("%d", &number[i]);
	}
	
	printf("Values inside the array: ");
	displayValues(number, numInt);
	
	printf("\nValues in ascending order: ");
	ascendingOrder(number,numInt);
	displayValues(number, numInt);
	
	printf("\nCount of positive odd numbers: %d", countPosOdd(number, numInt));
	printf("\nSum of odd numbers: %d",computeSumOdd(number, numInt)); 
	printf("\nLargest positive number: %d", largestPositive(number, numInt));
	
	return 0;
}

