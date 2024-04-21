#include <stdio.h>

int main (){

	const double regCharge = 400;
	const int regMin = 50;
	const double overReg = 8;
	
	const double premCharge = 25;
	const int premMin = 75;
	const double overPrem = 4;
	
	const int premMinNight = 100;
	const double overPremNight = 2;

	double regular();
	double premium ();
	
	int acc, min, hr;
	char serType;
	double amountDue=0;
	
	
	printf ("Account #: ");
	scanf ("%d", &acc);
	
	printf ("Service Code : ");
	scanf ("%s", &serType);
	
	if (serType == 'r' || serType == 'R')
	{
	
	
	/*REGULAR*/
		printf ("Duration in minutes: ");
		scanf ("%d", &min);
	
			if (min<=regMin)
			amountDue = regCharge;
			else 
			amountDue = regCharge + (min-regMin) * overReg;
			
			printf ("Amount Due: %.2lf", amountDue);

	}	 
	else if (serType == 'p' || serType == 'P')
		{
	   
	/*PREMIUM*/
	
			printf ("Time 24hr format: ");
			scanf ("%d", &hr);
			printf ("Duration in minutes: ");
			scanf ("%d", &min);
		
	/*DAY*/
			if (hr>=6 && hr<=18) 
				if (min > premMin)
					amountDue = premCharge + (min-premMin) * overPrem;
				else 
					amountDue = premCharge;
			else 
			{	 
	/*NIGHT*/ 	  	  	 
			
				if (min >= premMinNight)
					amountDue = premCharge + (min-premMinNight) * overPremNight;
				else 
					amountDue = premCharge;
				
			}
			
			printf ("\nAmount Due: %.2lf", amountDue);
			
		}
		else printf("Invalid Service Type");			
	}

