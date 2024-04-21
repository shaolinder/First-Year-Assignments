/*Breakout Session 2 - C++ Program

	Programmer: Vannessa Ruth A. Navarez
	Date: December 15, 2021
*/


#include <iostream>
using namespace std;

/*Display Values*/
void displayValues(int num[], int numberInt){
	int i=0;
	for(i; i<numberInt; i++){
		cout<<" "<<num[i]<<"\t";
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

/*Largest Positive*/
int largestPositive(int num[], int numberInt){
    int i;
    int max=0, temp=0;
    for (i=0;i<numberInt;i++){
        if (num[i]>temp){
	   		temp=num[i];
            max=num[i];
 	}
	}
    return max;
}

/*MAIN*/
int main () {
	int number[100], numInt=5, i;
	
	for(i=0; i<numInt; i++){
		cout<<"Number["<<i<<"]: ";
		cin>>number[i];
	}
	
	cout<<"Values inside the array: ";
	displayValues(number, numInt);
	
	cout<<"\nValues in ascending order: ";
	ascendingOrder(number,numInt);
	displayValues(number, numInt);
	
	cout<<"\nCount of positive odd numbers: "<<countPosOdd(number, numInt);
	cout<<"\nSum of odd numbers: "<<computeSumOdd(number, numInt); 
	cout<<"\nLargest positive number: "<<largestPositive(number, numInt);
	
	return 0;
}

