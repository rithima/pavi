#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
    int count = 0;

    printf("Enter an integer");
    scanf("%d", &n);

    while(n != 0)
    {
       
        n /= 10;
        ++count;
    }
    printf("%d",count);
}
