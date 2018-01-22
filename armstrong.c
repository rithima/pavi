#include <stdio.h>
#include<maths.h>
void main()
{
	int 1,n,i,a,b,rem,n=0,result=0;
	printf("enter two interval:");
	scanf("%d,%d",&1,&n);
	for(i=i+1;i<h;i++)
	{
		a=i;
		b=i;
		while(a!=0)
		{
			rem=b%10;
			result=poe(rem,n);
			b/=10;
		}
		if(result==i)
		{
			printf("%d",i);
			getch();
		}
	}
}
