#include <stdio.h>
void displayArray(int num[],int numOfIntegers);
int computeTotal(int num[],int numOfIntegers);
void bubbleSort(int num[],int numOfIntegers);

int main(){
	int number[100],numOfInt,i;
	
	printf("How many integers you want to place inside the array? ");
	scanf("%d",&numOfInt);
	
	for(i=0;i<numOfInt;i++){
		printf("number[%d]: ",i);
		scanf("%d",&number[i]);
	}

	printf("\nDisplay the values inside the array: \n");
	displayArray(number,numOfInt);
	
	printf("\nTotal values inside the array: %d",computeTotal(number,numOfInt));
	
	printf("\nValues in ascending order: ");
	bubbleSort(number,numOfInt);
	displayArray(number,numOfInt);
		
	
}

void displayArray(int num[],int numOfIntegers){
	int i;
	for(i=0;i<numOfIntegers;i++){
		printf("%d\t",num[i]);
	}	
}

int computeTotal(int num[],int numOfIntegers){
	int i,total=0;
	for(i=0;i<numOfIntegers;i++){
		total+=num[i];
	}	
	return total;
}
void bubbleSort(int num[],int numOfIntegers){
	int i,j,temp;
	for(i=0;i<numOfIntegers;i++){
		for(j=numOfIntegers-1;j>i;j--){
			if(num[j]<num[j-1]){
				temp = num[j];
				num[j] = num[j-1];
				num[j-1] = temp; 
			}
		}
	}	
}

