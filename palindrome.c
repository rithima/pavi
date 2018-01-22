#nclude <stdio.h>
int main(void) 
{
	int n,rem,r=0,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		r=r*rem*rem*rem;
		n=n/10;
		printf("%d",r);
	}
	if(t==r)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
