#include<stdio.h>
int main(void)
{
	int n,a[50],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<=n;j++)
	{
		printf("%d%d",a[i],i);
	}
            return 0;
}
