#include <iostream>
using namespace std; 

int sumOfAll(int n1,int n2, int n3, int n4, int n5){
	int total=0;
	total = n1 + n2 + n3 + n4 +n5;
	
	return total;
}


int computeAverage(int n1,int n2, int n3, int n4, int n5){
	int average=0;
	average = (n1 + n2 + n3 + n4 + n5)/5;
	
	return average;
}

int countOfPositiveEven(int n1, int n2, int n3, int n4,int n5){

    int countPosEven=0;


    if (n1 > 0 && n1%2==0)
        countPosEven++;
	if (n2 > 0 && n2%2==0)
        countPosEven++;
	if (n3 > 0 && n3%2==0)
        countPosEven++;
	if (n4 > 0 && n4%2==0)
        countPosEven++;
	else
        countPosEven++;

	return countPosEven;
}

int countOfNegativeEven(int n1, int n2, int n3, int n4,int n5){

    int countNegEven=0;


    if (n1 < 0 && n1%2!=0)
        countNegEven++;
	if (n2 < 0 && n2%2!=0)
        countNegEven++;
	if (n3 < 0 && n3%2!=0)
        countNegEven++;
	if (n4 < 0 && n4%2!=0)
        countNegEven++;
	else
        countNegEven++;

	return countNegEven;
}

int sumOfPositiveOdd(int n1, int n2, int n3, int n4,int n5){

    int sumPosOdd=0;
    if (n1 > 0 && n1%1!=0)
        sumPosOdd+=n1;
	if (n2 > 0 && n2%1!=0)
        sumPosOdd+=n2;
	if (n3 > 0 && n3%1!=0)
        sumPosOdd+=n3;
	if (n4 > 0 && n4%1!=0)
	    sumPosOdd+=n4;
	else
        sumPosOdd;

	return sumPosOdd;
}

int sumOfNegativeOdd(int n1, int n2, int n3, int n4,int n5){

    int sumNegOdd=0;
    if (n1 < 0 && n1%2!=0)
        sumNegOdd+=n1;
	if (n2 < 0 && n2%2!=0)
        sumNegOdd+=n2;
	if (n3 < 0 && n3%2!=0)
        sumNegOdd+=n3;
	if (n4 < 0 && n4%2!=0)
	    sumNegOdd+=n4;
	else
        sumNegOdd;

	return sumNegOdd;
}

int main(){
	int num1,num2,num3,num4,num5,total=0,average=0,countPosEven=0,countNegEven=0,sumPosOdd=0,sumNegOdd=0;
	
	cout<<"Number 1: ";
	cin>>num1;
	cout<<"Number 2: ";
	cin>>num2;
	cout<<"Number 3: ";
	cin>>num3;
	cout<<"Number 4: ";
	cin>>num4;
	cout<<"Number 5: ";
	cin>>num5;
	
	total = sumOfAll(num1, num2, num3, num4, num5);
	average = computeAverage(num1, num2, num3, num4, num5);
	countPosEven = countOfPositiveEven(num1, num2, num3, num4, num5);
	countNegEven = countOfNegativeEven(num1, num2, num3, num4, num5);
	sumPosOdd = sumOfPositiveOdd(num1, num2, num3, num4, num5);
	sumNegOdd = sumOfNegativeOdd(num1, num2, num3, num4, num5);

	
	cout<<"Total: "<<total;
	cout<<"\nAverage: "<<average;
    cout<<"\nCount of positive even nos.: "<<countPosEven;
    cout<<"\nCount of negative even nos.: "<<countNegEven;
    cout<<"\nSum of positive odd nos.: "<<sumPosOdd;
    cout<<"\nSum of negative odd nos.: "<<sumNegOdd;

	return 0;
}

