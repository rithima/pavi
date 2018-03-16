#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i,j;
	printf("enter the string:");
	scanf("%s",s1);
	printf("enter the string:");
	scanf("%s",s2);
	if(s1[i]==s2[j])
	{
		printf("%s",s1);
	}
	else if(s1[i]>s2[j])
	{
		printf("%s",s1);
	}
	else
	{
		printf("%s",s2);
	}
	
	return 0;
}
