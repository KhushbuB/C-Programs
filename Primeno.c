#include<stdio.h>

void main()
{
	int i, num, p=0;
	printf("Enter number: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		if(num%i == 0)
		{
			p++;
		}	
	}	
	
	if(p==2)
		printf("Prime no.");
	else
		printf("Not Prime no.");
}
