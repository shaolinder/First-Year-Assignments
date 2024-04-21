
#include <stdio.h>
int main () {

	int studid, year;
	char name, degree;
	float prelim, mid, semi, final,total=0, ave=0;
	
	printf ("Student #: ");
	scanf ("%d", &studid);
	printf ("Name: ");
	scanf (" %[^\n]s", &name);
	printf ("Degree: ");
	scanf (" %[^\n]s", &degree);
	printf ("Year: ");
	scanf ("%d", &year);
	
	printf ("Major Exam Scores");
	printf ("\n");
	printf ("   Prelim: ");
	scanf ("%f",&prelim);
	printf ("   Midterm: ");
	scanf ("%f",&mid);
	printf ("   Semifinal: ");
	scanf ("%f",&semi);
	printf ("   Final: ");
	scanf ("%f",&final);
	
	total=prelim+mid+semi+final;

	
	printf ("Total Score: %.0f",total);
	
	ave=total/4;
		
	printf ("\nAverage Score: %.2f",ave);
	
	printf ("\n");
	
	return 0; 
	
	
}

