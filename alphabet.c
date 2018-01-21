#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	printf("%c",ch);
	if(ch>=65&&ch<=90|ch>=97&&ch<=122)
	{
		printf("alphabet");
	}
	else
	{
		printf("not alphabet");
	}
	return 0;
}
