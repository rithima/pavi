#include <stdio.h>

int main(void) 
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	{
	if(a>c)
	{
		printf("a is greater");
	}
	else
	{
		printf("b is greater");
	}
	}
	else
	if(b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
	return 0;
}
