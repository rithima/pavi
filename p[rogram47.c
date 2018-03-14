#include <stdio.h>

int main(void) 
{
	int i,j,a[50],temp,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("lowest element %d",a[0]);
		printf("highest element %d",a[n-1]);
	return 0;
}
