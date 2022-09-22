#include<stdio.h>
int fact(int n);
int main()
{
    int n,res=0;
    printf("\n enter a number to calulate factorial: ");
    scanf("%d",&n);
    res=fact(n);
    printf("\n factorial of %d is %d",n,res);
    return 0;
}
int fact(int n)
{
    int r=1;
    if(n>0)
    {
        r=n*fact(n-1);
    }
    return r;
}