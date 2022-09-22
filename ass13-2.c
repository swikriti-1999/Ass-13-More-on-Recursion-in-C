#include<stdio.h>
int odd(int n);
int main()
{
    int n,sum=0;
    printf("\n enter a number to calculate sum of frst n odd numbers: ");
    scanf("%d",&n);
    sum=odd(n);
    printf("\n sum of frst %d odd numbers are %d",n,sum);
    return 0;
}
int odd(int n)
{
    int s=0;
    if(2*n-1>0)
    {
        s=2*n-1+odd(n-1);
    }
    return s;
}