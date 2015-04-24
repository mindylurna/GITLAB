#include<stdio.h>

void main(){
	int mul=0;
	for(int i=10; i<200; i++)
		mul*=i;
	printf("Multiple of 10 to 199 is %d", mul);
}