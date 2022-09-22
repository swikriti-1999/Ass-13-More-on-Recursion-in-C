#include<stdio.h>
int even(int n);
int main()
{
    int n,sum=0;
    printf("\n enter a number to calculate sum of frst n even numbers: ");
    scanf("%d",&n);
    sum=even(n);
    printf("\n sum of frst %d odd numbers are %d",n,sum);
    return 0;
}
int even(int n)
{
    int s=0;
    if(2*n>0)
    {
        s=2*n+even(n-1);
    }
    return s;
}