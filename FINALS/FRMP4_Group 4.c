#include <stdio.h>

int sumOfAll(int n1,int n2, int n3, int n4, int n5);
int computeAverage(int n1,int n2, int n3, int n4, int n5);
int countOfPositiveEven(int n1,int n2, int n3, int n4, int n5);
int countOfNegativeEven(int n1,int n2, int n3, int n4, int n5);
int sumOfPositiveOdd(int n1,int n2, int n3, int n4, int n5);
int sumOfNegativeOdd(int n1,int n2, int n3, int n4, int n5);


int main(){
	int num1,num2,num3,num4,num5,total=0,average=0,countPosEven=0,countNegEven=0,sumPosOdd=0,sumNegOdd=0;
	
	printf ("Number 1: ");
	scanf ("%d", &num1);
	printf ("Number 2: ");
	scanf ("%d", &num2);
	printf ("Number 3: ");
	scanf ("%d", &num3);
	printf ("Number 4: ");
	scanf ("%d", &num4);
	printf ("Number 5: ");
	scanf ("%d", &num5);
	
	printf ("Total: %d",total=sumOfAll(num1, num2, num3, num4, num5));
	printf ("\nAverage: %d",average=computeAverage(num1, num2, num3, num4, num5));
    printf ("\nCount of positive even nos.: %d",countPosEven=countOfPositiveEven(num1, num2, num3, num4, num5));
    printf ("\nCount of negative even nos.: %d",countNegEven=countOfNegativeEven(num1, num2, num3, num4, num5));
    printf ("\nSum of positive odd nos.: %d",sumPosOdd=sumOfPositiveOdd(num1, num2, num3, num4, num5));
    printf ("\nSum of negative odd nos.: %d",sumNegOdd=sumOfNegativeOdd(num1, num2, num3, num4, num5));

	return 0;
}

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

    int countPosOdd=0;



    if (n1 > 0 && n1%2!=0)
        countPosOdd++;
	if (n2 > 0 && n2%2!=0)
        countPosOdd++;
	if (n3 > 0 && n3%2!=0)
        countPosOdd++;
	if (n4 > 0 && n4%2!=0)
        countPosOdd++;
	else
        countNegEven++;

	return countNegEven;
}



