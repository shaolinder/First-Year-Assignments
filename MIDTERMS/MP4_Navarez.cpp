/* Calculate the tax due or the refund for a family based on the 
	following imaginary formula. 
	
	1. For each dependent deduct P1,000.00 from income. 
	2. Determine tax rate from the following brackets:
	
	Programmer: Navarez, Vannessa Ruth A.
	Date: October 6, 2021
	
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (){

	float last, payroll, taxable=0, deduc=0, tax=0, due=0;
	int depend;
	
	cout<<"Enter total income last year: ";
	cin>>last;
	cout<<"Enter total payroll deduction: "; 
	cin>>payroll;
	cout<<"Enter number of dependents: ";
	cin>>depend;
	
	cout<<"\nTotal Income: "<<setprecision(2)<<fixed<<last;
	cout<<"\nNumber of dependants: "<<depend;
	
	deduc = depend*1000;
	taxable = last - deduc;
	
	cout<<"\nTaxable Income: "<<taxable<<fixed<<setprecision(2);
	
	if (taxable <= 10000){
		tax = taxable * 0.02;
		}
		
	else if (taxable>10000 && taxable<=20000){
		tax = taxable * 0.05; 
		}
		
	else if (taxable>20000 && taxable<=30000){
		tax = taxable * 0.07;
		}
	else if (taxable>30000 && taxable<=50000){
		tax = taxable * 0.10;
		}
		
	else if (taxable>50000){
		tax = taxable * 0.15;
		}
		
		cout<<"\nTotal tax: "<<tax<<fixed<<setprecision(2);
		
	cout<<"\nTax already paid: "<<fixed<<setprecision(2)<<payroll;
	
	due = tax - payroll;
	
	cout<<"\nTax due: "<<due<<fixed<<setprecision(2)<<endl;
	
	return 0;
	
	
	
		
		
	
	
	


}
	

