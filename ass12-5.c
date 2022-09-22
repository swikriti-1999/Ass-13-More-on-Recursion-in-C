#include<stdio.h>
int sum(int n);
int main()
{
    int n,res=0;
    printf("\n enter a number to calculate sum of digits: ");
    scanf("%d",&n);
    res=sum(n);
    printf("\n sum of digit od number %d is %d",n,res);
    return 0;
}
int sum(int n)
{
    int s=0,rem=0;
    if(n>0)
    {
        rem=n%10;
        s=rem+sum(n/10);
    }
    return s;
}