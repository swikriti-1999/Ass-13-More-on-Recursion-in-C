#include<stdio.h>
int count(int n);
int main()
{
    int n,res;
    printf("\n enter any number to count no. of digits in it: ");
    scanf("%d",&n);
    res=count(n);
    printf("\n entered number is %d and number of digit in it is %d",n,res);
    return 0;
}
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
        count(n);
    }
    return c;
}
