#include<stdio.h>
int fibb(int i);
int main()
{
    int n,i;
    printf("\n enter the value number of terms of fibbonacci series you want: ");
    scanf("%d",&n);
    printf("\n fibbonaci series is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",fibb(i));
    }
    return 0;
}
int fibb(int i)
{
    if(i==0 || i==1)
        return i;
    return fibb(i-1)+fibb(i-2);
}