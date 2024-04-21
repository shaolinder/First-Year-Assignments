#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	/*int num1;
	long num2;
	long long num3;
	double num4;
	float num5;
	long double num6;
	
	printf("Number 1: ");
	scanf("%d", &num1);
	printf("The absolute value of %d = %d", num1, abs(num1));
	
	printf("\nNumber 2: ");
	scanf("%ld", &num2);
	printf("The absolute value of %ld = %ld", num2, labs(num2));
	
	printf("\nNumber 3: ");
	scanf("%lld", &num3);
	printf("The absolute value of %lld = %lld", num3, llabs(num3));
	
	printf("\nNumber 4: ");
	scanf("%lf", &num4);
	printf("The absolute value of %.0lf = .0%lf", num4, fabs(num4));
	
	printf("\nNumber 5: ");
	scanf("%f", &num5);
	printf("The absolute value of %f = %f", num5, fabsf(num5));
	
	__mingw_printf("\nNumber 6: ");
	__mingw_scanf("%Lf", &num6);
	__mingw_printf("The absolute value of %Lf = %Lf", num6, fabsl(num6));
	
		printf("\nceil(-1.9 ) = %.1lf",ceil(-1.9));
	printf("\nceil(1.1) = %.1lf",ceil(1.1));
	printf("\nceilf(-1.9 ) = %.1f",ceilf(-1.9));
	printf("\nceilf(1.1) = %.1f",ceilf(1.1));
	__mingw_printf("\nceill(-1.9 ) = %.1Lf",ceill(-1.9));
	__mingw_printf("\nceill(1.1) = %.1Lf",ceill(1.1));
	
	printf("\nfloor(-1.1 ) = %.1lf",floor(-1.1));
	printf("\nfloor(1.9  ) = %.1lf",floor(1.9 ));
	printf("\nfloorf(-1.1 ) = %.1lf",floorf(-1.1));
	printf("\nfloorf(1.9  ) = %.1lf",floorf(1.9 ));
	__mingw_printf("\nfloorl(-1.1 ) = %.1Lf",floorl(-1.1));
	__mingw_printf("\nfloorl(1.9  ) = %.1Lf",floorl(1.9 ));*/
	
	printf("\ntrunc(-1.1 ) = %.1lf",trunc(-1.1));
	printf("\ntrunc(1.9  ) = %.1lf",trunc(1.9 ));
	printf("\ntruncf(-1.1 ) = %.1f",truncf(-1.1));
	printf("\ntruncf(1.9  ) = %.1f",truncf(1.9 ));
	__mingw_printf("\ntruncl(-1.1 ) = %.1Lf",truncl(-1.1));
	__mingw_printf("\ntruncl(1.9  ) = %.1Lf",truncl(1.9 ));
	
	printf("\nround(-1.1 ) = %.1lf",round(-1.1));
	printf("\nround(1.9 ) = %.1lf",round(1.9));
	printf("\nround(-1.5 ) = %.1lf",round(-1.5));
	
	printf("\nroundf(-1.1 ) = %.1f",roundf(-1.1));
	printf("\nroundf(1.9 ) = %.1f",roundf(1.9));
	printf("\nroundf(-1.5 ) = %.1f",roundf(-1.5));
	
	__mingw_printf("\nroundl(-1.1 ) = %.1Lf",roundl(-1.1));
	__mingw_printf("\nroundl(1.9 ) = %.1Lf",roundl(1.9));
	__mingw_printf("\nroundl(-1.5 ) = %.1Lf",roundl(-1.5));
	
	printf("\npow(3.0,4.0) = %.1lf",pow(3.0,4.0));
	printf("\npowf(3.0,4.0) = %.1f",powf(3.0,4.0));
	__mingw_printf("\npowl(3.0,4.0) = %.1Lf",powl(3.0,4.0));
	
	printf("\nsqrt(25.0) = %.1lf",sqrt(25.0));
	printf("\nsqrtf(25.0) = %.1f",sqrtf(25.0));
	__mingw_printf("\nsqrtl(25.0) = %.1Lf",sqrtl(25.0));
	
	 
	
	return 0;

}

