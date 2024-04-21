/*MACHINE PROBLEM 2 - FINALS
	Programmer: Navarez, Vannessa Ruth A.
	Date: November 10, 2021
*/
#include <stdio.h>


int main(){
	
	int x=18, countPosOdd=0,countNegEven=0,sumPosEven=0,sumNegOdd=0;
	int largest = x;//TO DISPLAY LARGEST NUMBER
	
	while (x>=-15){
		printf(" %d",x);
	
		if(x>0 && x%2!=0)
			countPosOdd++;
		if(x<0 && x%2==0)
		    countNegEven++;
		if(x>0 && x%2==0)
			sumPosEven+=x;
		else if (x<0 && x%2!=0)
			sumNegOdd+=x;
			
	x-=3;
	
	}
	
	//TO DISPLAY POSITIVE NUMBERS
	int xx=18;
		printf("\nPositive Numbers: ");
	while (xx>=3){
		printf(" %d", xx);
		xx-=3;
		}
		
	//TO DISPLAY NEGATIVE NUMBERS
	int xxx=-3;
		printf("\nNegative Numbers: ");
	while (xxx>=-15){
		printf(" %d", xxx);
		xxx-=3;
		}
		
	int smallest = xxx+3; //TO DISPLAY SMALLEST NUMBER
	
	printf("\nCount of positive odd numbers: %d",countPosOdd);
	printf("\nCount of negative even numbers: %d", countNegEven);
	printf("\nSum of negative odd numbers: %d", sumNegOdd);
	printf("\nSum of positive even numbers: %d", sumPosEven);
	printf("\nSmallest: %d", smallest);
	printf("\nLargest: %d", largest);

	return 0;
}



