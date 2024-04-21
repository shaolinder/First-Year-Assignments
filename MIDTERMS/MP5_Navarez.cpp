/* Machine Problem 5
	
	Make a program that will ask the user to enter a number. The program should
	determine if the number entered is positive odd, negative odd, positive even, or
	negative even.
	
	Programmer: Vannessa Ruth A. Navarez
	Date: October 12, 2021
	
	USING SWITCH-CASE and IF-ELSE
*/


#include <iostream>
using namespace std;

int main (){

	int num;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	switch(num%2==0){
	case  0:
		if (num < 0)
			cout<<num<<" is a NEGATIVE ODD number!\n";
		else 
			cout<<num<<" is a POSITIVE ODD number!\n";
		break;
	case 1:
		if (num>0)
			cout<<num<<" is a POSITIVE EVEN number!\n";
		else
			cout<<num<<" is a NEGATIVE EVEN number!\n";
			
	}
	
	return 0;

}

