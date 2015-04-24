#include<stdio.h>

void main(){
	int sum=0;
	for(int i=10; i<200; i++)
		sum+=i;
	printf("Sum of 10 to 199 is %d", sum);
}