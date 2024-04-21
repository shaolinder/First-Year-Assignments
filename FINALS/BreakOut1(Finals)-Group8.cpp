/*Breakout Session 1 - Finals
  GROUP 8 
   Navarez
   Pagobo
   Panugalon
   Perrañanda III
   Pizon
  December 6, 2021
 */
 
#include <stdio.h>

int inputXCoordinate(){
	int x;
	printf("Enter x coordinate: ");
	scanf("%d", &x);
	
	return x;
	}
	
int inputYCoordinate(){
	int y;
	printf("Enter y coordinate: ");
	scanf("%d", &y);
	
	return y;
	}

int getLocation (int xx, int yy){
	int q1; int q2; int q3; int q4; int q5; int xX; int yY; int origin; 
	
	if (xx>0 && yy>0)
      	q1; 		
    if (xx<0 && yy>0)
		q2;
    if (xx<0 && yy<0)
		q3;
    if (xx>0 && yy<0)
     	q4;
    if (xx==0)
      	xX;
    if (yy==0)
    	yY;
    if (yy==0 && xx==0)
       	origin;

	
	return 0;
}

int displayLocation(int qq1, int qq2, int qq3, int qq4, int xxX, int yyY, int oOrigin){

	if (qq1)
	printf("The point lies in Quadrant 1");
	else if (qq2)
	printf("The point lies in Quadrant 2");
	else if (qq3)
	printf("The point lies in Quadrant 3");
	else if (qq4)
	printf("The point lies in Quadrant 4");
	else if (xxX)
	printf("The point lies in x-axis");
	else if (yyY)
	printf("The point lies in y-axis");
	else if (oOrigin)
	printf("The point lies in origin");

	return 0;
}

 
int main(){
	int xxx, yyy;
	int qQ1, qQ2, qQ3, qQ4, xXx, yYx, ooOrigin;
	
	xxx = inputXCoordinate();
	yyy = inputYCoordinate();
	getLocation(xxx,yyy);
	displayLocation(qQ1, qQ2, qQ3, qQ4, xXx, yYx, ooOrigin);
	
	return 0;
	
	
}
	

