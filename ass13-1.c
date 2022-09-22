#include<stdio.h>
int printN(int n);
int main()
{
    int n,sum=0;
    printf("\n enter a number: ");
    scanf("%d",&n);
    sum=printN(n);
    printf("\n sum of first %d namural numbers is : %d",n,sum);
    return 0;
}
int printN(int n)
{
    int s=0;
    if(n>0)
    {
        s=n+printN(n-1);
    }
    return s;
}