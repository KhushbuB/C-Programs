#include<stdio.h>

void main()
{
	int f0=0, f1=1, fibo, limit, i;
	
	printf("Enter Limit: ");
	scanf("%d", &limit);
	
	for(i=0; i<=limit; i++)
	{
		fibo=f0+f1;
		printf(" %d ", fibo);
		f0=f1;
		f1=fibo;
	}
	
	
}
