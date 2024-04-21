#include <stdio.h>
int main(){
	int numOfInt,number,total=0,countPos=0,countNeg=0,sumEven=0,sumOdd=0,i=0;
	
	printf("How many integers do you want to input? ");
	scanf("%i",&numOfInt);
	
	while(i<numOfInt){
		printf("Enter number: ");
		scanf("%i",&number);
		
		total+=number;
		
		if(number>0)
			countPos++;
		if(number<0)
		    countNeg++;
		if(number%2!=0)
			sumOdd+=number;
		else
			sumEven+=number;
		
		i++;
	
	}
	
	printf("Total: %d",total);
	printf("\nCount of positive: %d",countPos);
	printf("\nCount of negative: %d",countNeg);
	printf("\nSum of even: %d",sumEven);
	printf("\nSum of odd: %d",sumOdd);
	
	
	return 0;
}

