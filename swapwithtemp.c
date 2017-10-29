#include<stdio.h>

void main()
{
	int a=1, b=2, temp;

	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("a=%d b=%d", a, b);
}
