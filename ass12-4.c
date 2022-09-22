#include<stdio.h>
int sq(int n);
int main()
{
    int n,sum=0;
    printf("\n enter a number to calculate sum of frst n square of numbers: ");
    scanf("%d",&n);
    sum=sq(n);
    printf("\n sum of frst %d squares numbers are %d",n,sum);
    return 0;
}
int sq(int n)
{
    int s=0;
    if(n*n>0)
    {
        s=n*n+sq(n-1);
    }
    return s;
}