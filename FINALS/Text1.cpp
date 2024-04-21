/*MACHINE PROBLEM 3 - FINALS
	Programmer: Navarez, Vannessa Ruth A.
	Date: November 17, 2021
*/
#include <iostream>
using namespace std;


int main(){
	
	int x=-15, xx=+3, countPosOdd=0, countNegOdd=0, countPosEven=0, countNegEven=0, countAll=0,sumPos=0, sumNeg=0, sumEven=0, sumOdd=0, sumAll=0;
	int largest, smallest;
	
	do {
		cout<<" "<<x;
	
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
	
	
	//POSITIVE NUMBERS
		
		x=3;
		cout<<"\nPositive Numbers: ";
	do {
		cout<<" "<<x;
		x+=3;
	}while(x<=12);
		
	//NEGATIVE NUMBERS
		x=-15;
		cout<<"\nNegative Numbers: ";
	do {
		cout<<" "<<x;
		x+=3;
	}while (x<=-3);

	//EVEN NUMBERS
		x=-15;
		cout<<"\nEven Numbers: ";
	do {
		if(x%2==0)
		cout<<" "<<x;
		x+=3;
	}while(x<=12);
	
	//ODD NUMBERS
		x=-15;
		cout<<"\nOdd Numbers: ";
	do {
		if(x%2!=0)
		cout<<" "<<x;
		x+=3;
	}while (x<=-3);
	
	cout<<"\nSum of positive numbers: "<<sumPos;
	cout<<"\nSum of negative numbers: "<<sumNeg;
	cout<<"\nSum of even numbers: "<<sumEven;
	cout<<"\nSum of odd numbers: "<<sumOdd;
	cout<<"\nSum of all numbers: "<<sumAll;
	cout<<"\nCount of positive odd numbers: "<<countPosOdd;
	cout<<"\nCount of negative odd numbers: "<<countNegOdd;
	cout<<"\nCount of postive even numbers: "<<countPosEven;
	cout<<"\nCount of negative even numbers: "<<countNegEven;
	cout<<"\nCount of all numbers: "<<countAll;


	return 0;
}


