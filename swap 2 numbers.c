#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("value of a and b before swapping %d %d \n",a,b);
            a=a+b;
            b=a-b;
            a=a-b;
            printf("value of a and b after swapping %d %d \n",a,b);
	return 0;
}
