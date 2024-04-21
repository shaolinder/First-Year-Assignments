/* 
	Machine Problem # 1
	-------------------
	
	Create a C program that will prompt the user to enter 2 integers. 
	The program will display the sum,difference, product, quotient, and remainder.
	
	Programmer: Navarez, Vannessa Ruth A
	Date: September, 08, 2021
*/

#include <stdio.h>
int main() {
	int num1, num2, sum=0, diff=0, prod=0, quot=0, rem=0;
	
	printf ("Number 1: ");
	scanf ("%d", &num1);
	printf ("Number 2: ");
	scanf ("%d", &num2);
	
	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quot = num1 / num2;
	rem = num1 % num2;
	
	printf("\n");
	
	printf ("The result of %d + %d = %d.", num1, num2, sum);
	printf ("\nThe result of %d - %d = %d.", num1, num2, diff);
	printf ("\nThe result of %d * %d = %d.", num1, num2, prod);
	printf ("\nThe result of %d / %d = %d.", num1, num2, quot);
	printf ("\nThe result of %d %% %d = %d.", num1, num2, rem);

	
	printf("\n");

	
	return 0;
	


}

