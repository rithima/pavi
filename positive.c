#include <stdio.h>

int main(void)
{
	int n;
	printf("enter any integer");
	scanf("%d",&n);
	if(n<=0)
	{
		if(n==0)
		{
			printf("given number is zero");
		}
		else
		{
			printf(" ginen number is negative");
		}
	}
	else
	{
		printf("given number is positive");
	}

	return 0;
}
