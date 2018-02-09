#include <stdio.h>
int main(void) 
{
	char ch;
	scanf("%c",&ch);
	if(ch>='0'&&ch<='9')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
