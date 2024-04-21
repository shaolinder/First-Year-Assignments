/*MACHINE PROBLEM 1 - FINALS
	Programmer: Navarez, Vannessa Ruth A.
	Date: October 27, 2021
*/
#include <iostream>
using namespace std;


int main(){
	
	int x=18, countPosOdd=0,countNegEven=0,sumPosEven=0,sumNegOdd=0;
	int largest = x;//TO DISPLAY LARGEST NUMBER
	
	while (x>=-15){
		cout<<" "<<x;
	
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
		cout<<"\nPositive Numbers: ";
	while (xx>=3){
		cout<<" "<<xx;
		xx-=3;
		}
		
	//TO DISPLAY NEGATIVE NUMBERS
	int xxx=-3;
		cout<<"\nNegative Numbers: ";
	while (xxx>=-15){
		cout<<" "<<xxx;
		xxx-=3;
		}
		
	int smallest = xxx+3; //TO DISPLAY SMALLEST NUMBER
	
	cout<<"\nCount of positive odd numbers: "<<countPosOdd;
	cout<<"\nCount of negative even numbers: "<<countNegEven;
	cout<<"\nSum of negative odd numbers: "<<sumNegOdd;
	cout<<"\nSum of positive even numbers: "<<sumPosEven<<endl;
	cout<<"Smallest: "<<smallest<<endl;
	cout<<"Largest: "<<largest<<endl;

	return 0;
}


