#include <iostream>
using namespace std;

int main() 
{
	int n,i,j,sum;
	scanf("%d%d%d%d",&n,&i,&j,&sum);
	while(n!=0)
	{
		i=n%10;
		j=j*10+i;
		n=n/10;
	}	
	while(j!=0)
	{
		sum=j%10;
		j=j/10;
	
	printf("%d\t",sum);
	}
	return 0;
}
