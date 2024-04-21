#include <iostream>
#include <string>
using namespace std;


int main(){
	
	int x=18, pos, countPosOdd=0,countNegEven=0,sumPosEven=0,sumNegOdd=0;
	int largest = x;
	string positive="", negative="";
	
	while (x>=-15){
		cout<<" "<<x;
		if (x<0)
			negative = negative+to_string(x);
		else if (x>0)
			positive = positive + to_string(x);
			
			
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
	int xx=18;
		cout<<"\nPositive Numbers: ";
	while (xx>=3){
		cout<<" "<<xx;
		xx-=3;
		}
	int xxx=-3;
		cout<<"\nNegative Numbers: ";
	while (xxx>=-15){
		cout<<" "<<xxx;
		xxx-=3;
		}
	int smallest = xxx+3;
	cout<<"\nCount of positive odd numbers: "<<countPosOdd;
	cout<<"\nCount of negative even numbers: "<<countNegEven;
	cout<<"\nSum of negative odd numbers: "<<sumNegOdd;
	cout<<"\nSum of positive even numbers: "<<sumPosEven<<endl;
	cout<<"Smallest: "<<smallest<<endl;
	cout<<"Largest: "<<largest<<endl;

	return 0;
}

