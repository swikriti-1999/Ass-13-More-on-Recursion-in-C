#include<stdio.h>
int power(int n, int p);
int main()
{
    int n,p,res=0;
    printf("\n enter number: ");
    scanf("%d",&n);
    printf("\n enter value of power: ");
    scanf("%d",&p);
    res=power(n,p);
    printf("\n %d power of a number %d is = %d",p,n,res);
    return 0;
}
int power(int n, int p)
{
    if(p==0)
    return 1;
    else
    return(n*power(n,p-1));
}