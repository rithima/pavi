#include<stdio.h>
#include<string.h>
int main(void) 
{
	char a[10],b[10];
	int i,j;

	scanf("%s",a);
	
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		
	}
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("\n%s",a);
return 0;
}
