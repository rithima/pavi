#include <stdio.h>

int main(void) 
{
	int a;
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
	return 0;
}
