/* Machine Problem 5
	
	Make a program that will ask the user to enter a number. The program should
	determine if the number entered is positive odd, negative odd, positive even, or
	negative even.
	
	Programmer: Vannessa Ruth A. Navarez
	Date: October 12, 2021
	
	USING SWITCH CASE and IF-ELSE
	
*/


#include <stdio.h>
int main (){

	int num;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	switch(num%2==0){
	case  0:
		if (num < 0)
			printf ("%d is a NEGATIVE ODD number!\n",num);
		else 
			printf ("%d is a POSITIVE ODD number!\n",num);
		break;
	case 1:
		if (num>0)
			printf ("%d is a POSITIVE EVEN number!\n",num);
		else
			printf ("%d is a NEGATIVE EVEN number!\n",num);
			
	}
	
	return 0;

}

