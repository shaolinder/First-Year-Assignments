/* 
	Machine Problem #1
	------------------
	
	Create a C++ program that will prompt the user to enter 2 integers. 
	The program will display the sum,difference, product, quotient, and remainder.
	
	Programmer: Navarez, Vannessa Ruth A
	Date: September, 08, 2021
*/

#include <iostream.h>
using namespace std;
int main() {
	int num1, num2, sum=0, diff=0, prod=0, quot=0, rem=0;
	
	cout<<"Number 1: ";
	cin>>num1;
	cout<<"Number 2: ";
	cin>>num2;
	
	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quot = num1 / num2;
	rem = num1 % num2;
	
	cout<<"\n";
	
	cout<<"The result of "<<num1<<" + "<<num2<<" = "<<sum<<"."<<endl;
	cout<<"The result of "<<num1<<" - "<<num2<<" = "<<diff<<"."<<endl;
	cout<<"The result of "<<num1<<" * "<<num2<<" = "<<prod<<"."<<endl;
	cout<<"The result of "<<num1<<" / "<<num2<<" = "<<quot<<"."<<endl;
	cout<<"The result of "<<num1<<" % "<<num2<<" = "<<rem<<".";
	
	cout<<"\n";

	
	return 0;
	


}

