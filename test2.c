#include<stdio.h>

void main(){
	int mul=0;
	for(int i=1; i<10; i++)
		mul*=i;
	printf("Multiple of 1 to 9 is %d", mul);
}