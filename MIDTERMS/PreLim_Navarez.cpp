/* Navarez PRELIM */

#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
int main () {
	int quan;
	string prodNum, prodName;
	float price, payment, paid=0, change=0;
	
	cout<<"Enter Product Number : ";
	getline(cin,prodNum);
	cout<<"Enter Product Name   : ";
	getline(cin,prodName);
	cout<<"Enter Product Price  : ";
	cin>>price;
	cout<<"Enter Quantity Bought: ";
	cin>>quan;
	
	paid = price * quan;
	
	cout<<"\nAmount to be Paid  : "<<setprecision(2)<<fixed<<paid<<endl;
	
	cout<<"\nEnter Payment      : ";
	cin>>payment;
	
	change = payment - paid;
	
	cout<<"\nChange             : " <<setprecision(2)<<fixed<<change<<endl;
	
	
	return 0;




}

