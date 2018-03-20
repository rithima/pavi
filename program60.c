#include<stdio.h>
int main(void)
{
	int n1=0,n2=1,i,n,temp;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",n1);
		temp=n1+n2;
		n1=n2;
		n2=temp;
	}
	return 0;
}	
