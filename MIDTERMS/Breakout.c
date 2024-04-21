#include <stdio.h>

int main (){

	const double regCharge = 400;
	const int regMin = 50;
	const double overReg = 8;
	
	const double premCharge = 425;
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
	
		
		/*-------REGULAR-------*/
	
	if (serType == 'r' || serType == 'R')
	{
		printf ("Duration in minutes: ");
		scanf ("%d", &min);
	
			if (min<=regMin)
			amountDue = regCharge;
			
		
			else 
			amountDue = regCharge + (min-regMin) * overReg;
			printf ("Amount Due: %.2lf", amountDue);
	}
			
			
		/*-------PREMIUM-------*/
			
	else if(serType == 'p' || serType == 'P')
	{
			printf ("Time 24hr format: ");
			scanf ("%d", &hr);
			printf ("Duration in minutes: ");
			scanf ("%d", &min);
		
		/*---------DAY---------*/
	   		if (hr<19 && hr>5)
	 			if (min <= premMin) 
					amountDue = premCharge;
				else 
					amountDue = premCharge + (min-premMin) * overPrem;	  
					
		/*--------NIGHT--------*/ 	  	  	  
			else
			{
				if (min >= premMinNight)
					amountDue = premCharge;
				else 
					amountDue = premCharge + (min-premMin) * overPrem;
			}
			printf ("Amount Due: %.2lf", amountDue);
	}
			
	else 
		printf ("Invalid Service Code.");
		

			

}

