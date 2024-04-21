/* Machine Problem 3
	Using the conditional or selection control structures, 
	create a program that will prompt the user
	to enter 5 numbers. Thereafter the program will 
	determine the smallest and the largest number.
	
	Programmer: Vannessa Ruth A. Navarez
	Date: September 29, 2021 
*/


#include <stdio.h>

int main (){
	int num1, num2, num3, num4, num5;
	
	printf ("Enter number 1: ");
	scanf ("%d", &num1);
	printf ("Enter number 2: ");
	scanf ("%d", &num2);
	printf ("Enter number 3: ");
	scanf ("%d", &num3);
	printf ("Enter number 4: ");
	scanf ("%d", &num4);
	printf ("Enter number 5: ");
	scanf ("%d", &num5);
	
			
	if (num1<num2 && num1<num3 && num1<num4 && num1<num5)
		printf ("Smallest: %d\n", num1);
	else if (num2<num3 && num2<num4 && num2<num5)
		printf ("Smallest: %d\n", num2);
	else if (num3<num4 && num3<num5)
		printf ("Smallest: %d\n", num3);
	else if (num4<num5)
		printf ("Smallest: %d\n", num4);
	else
		printf ("Smallest: %d\n", num5);
	
	if (num1>num2 && num1>num3 && num1>num4 && num1>num5)
		printf ("Largest: %d\n", num1);
	else if (num2>num3 && num2>num4 && num2>num5)
		printf ("Largest: %d\n", num2);
	else if (num3>num4 && num3>num5)
		printf ("Largest: %d\n", num3);
	else if (num4>num5)
		printf ("Largest: %d\n", num4);
	else
		printf ("Largest: %d\n", num5);
	
		


	
	return 0;
	


}

