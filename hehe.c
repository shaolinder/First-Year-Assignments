#include <stdio.h>

int main (){
	int count = 0;
	int sum = 0;
	while (count<=5){
		sum=sum+count*(count-1);
		count++;
		}
	printf ("%d", sum);
	return 0;
	


}

