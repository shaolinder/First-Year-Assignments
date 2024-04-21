/*MACHINE PROBLEM 2 - FINALS
	Programmer: Navarez, Vannessa Ruth A.
	Date: November 10, 2021
*/
#include <stdio.h>


int main(){
	
	int x=18, xx=-3, y=0, countPosEven=0,countNegOdd=0,sumNegEven=0,sumPosOdd=0;
	int largest, smallest;
	
	for (;x>=-15;x-=3){
		printf(" %d",x);
		
        /*DISPLAY LARGEST AND SMALLEST*/
		if (y<x) {
            largest=x;
            y=x;
		} 
		else {
		    smallest=x;
		    y=x;
		}

		/*DISPLAY COUNT AND SUM OF POSITIVE/ NEGATIVE EVEN / ODD*/
		if(x<0 && x%2!=0)
			countNegOdd++;
		if(x>0 && x%2==0)
		    countPosEven++;
		if(x<0 && x%2==0)
			sumNegEven+=x;
		else if (x>0 && x%2!=0)
			sumPosOdd+=x;
			
	}
	
	/*TO DISPLAY POSITIVE NUMBERS*/
		printf("\nPositive Numbers: ");
	for (x=18;x>=3;x-=3){
		printf(" %d", x);
		}
		
	/*TO DISPLAY NEGATIVE NUMBERS*/
		printf("\nNegative Numbers: ");
	for (xx=-3; xx>=-15;xx-=3){
		printf(" %d", xx);
		}
		
	printf("\nSum of positive odd numbers: %d", sumPosOdd);
	printf("\nSum of negative even numbers: %d", sumNegEven);
	printf("\nCount of negative odd numbers: %d",countNegOdd);
	printf("\nCount of positive even numbers: %d", countPosEven);
	printf("\nSmallest: %d", smallest);
	printf("\nLargest: %d", largest);

	return 0;
}



