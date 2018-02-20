#include<stdio.h>
int main()
{
	int i,count=0;
	char a[50];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<'z')
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
