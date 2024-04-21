/*
	Create a C program that will prompt the user to enter the student id, name of the student,
	degree, year, and 4 major exam scores (namely, Prelim, Midterm, Semifinal, Final). Thereafter,
	the program will calculate and display the total exam score and the average score.
	
	Programmer: Vannessa Ruth A. Navarez
	Date: September 15, 2021

*/

#include <stdio.h>
int main () {

	int studID, year;
	char name, degree;
	float prelim, mid, semi, final,total=0, average=0;
	
	printf ("Student #: ");
	scanf ("%d", &studID);
	printf ("Name     : ");
	scanf (" %[^\n]s", &name);
	printf ("Degree   : ");
	scanf (" %[^\n]s", &degree);
	printf ("Year     : ");
	scanf ("%d", &year);
	
	printf ("Major Exam Scores");
	printf ("\n");
	printf ("   Prelim   : ");
	scanf ("%f",&prelim);
	printf ("   Midterm  : ");
	scanf ("%f",&mid);
	printf ("   Semifinal: ");
	scanf ("%f",&semi);
	printf ("   Final    : ");
	scanf ("%f",&final);
	
	total=prelim+mid+semi+final;
	average=total/4;

	
	printf ("Total Score  : %.0f",total);
		
	printf ("\nAverage Score: %.2f",average);
	
	printf ("\n");
	
	return 0; 
	
	
}

