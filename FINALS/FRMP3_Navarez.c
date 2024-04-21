/*MACHINE PROBLEM 3 - FINALS
	Programmer: Navarez, Vannessa Ruth A.
	Date: November 17, 2021
*/
#include <stdio.h>

int main(){
	
	int x=-15, countPosOdd=0, countNegOdd=0, countPosEven=0, countNegEven=0, countAll=0,sumPos=0, sumNeg=0, sumEven=0, sumOdd=0, sumAll=0;
	int largest, smallest;
	
	do {
		printf(" %d",x);
	
	/*COUNT AND SUM OF POSITIVE/ NEGATIVE/ EVEN / ODD, ETC.*/

		if(x>0)
			sumPos+=x;
		if(x<0)
			sumNeg+=x;
		if(x%2==0)
			sumEven+=x;
		if(x%2!=0)
			sumOdd+=x;
		if(x>0 && x%2!=0)
			countPosOdd++;
		if(x<0 && x%2!=0)
			countNegOdd++;
		if(x>0 && x%2==0)
			countPosEven++;
		if(x<0 && x%2==0)
			countNegEven++;
		
			sumAll+=x;
			countAll++;
		x+=3;
	} while(x<=12);
	
	
	/*POSITIVE NUMBERS*/
		
		x=3;
		printf("\nPositive Numbers: ");
	do {
		printf(" %d",x);
		x+=3;
	}while(x<=12);
		
	/*NEGATIVE NUMBERS*/
		x=-15;
		printf("\nNegative Numbers: ");
	do {
		printf(" %d",x);
		x+=3;
	}while (x<=-3);

	/*EVEN NUMBERS*/
		x=-15;
		printf("\nEven Numbers: ");
	do {
		if(x%2==0)
		printf(" %d",x);
		x+=3;
	}while(x<=12);
	
	/*ODD NUMBERS*/
		x=-15;
		printf("\nOdd Numbers: ");
	do {
		if(x%2!=0)
		printf(" %d",x);
		x+=3;
	}while (x<=9);
	
	printf("\nSum of positive numbers: %d",sumPos);
	printf("\nSum of negative numbers: %d",sumNeg);
	printf("\nSum of even numbers: %d",sumEven);
	printf("\nSum of odd numbers: %d",sumOdd);
	printf("\nSum of all numbers: %d",sumAll);
	printf("\nCount of positive odd numbers: %d",countPosOdd);
	printf("\nCount of negative odd numbers: %d",countNegOdd);
	printf("\nCount of postive even numbers: %d",countPosEven);
	printf("\nCount of negative even numbers: %d",countNegEven);
	printf("\nCount of all numbers: %d",countAll);


	return 0;
}


