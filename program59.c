#include<stdio.h>
int main()
{
	int i,j,a[50],n=10,t;
	for(i=0;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=10-1;i++)
	{
		for(j=i;j<=10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("maximum element %d",a[10-1]);
	return 0;
  }
