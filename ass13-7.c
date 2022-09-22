#include <stdio.h>
int hcf(int num1, int num2);
int main()
{
    int num1, num2, res;
    printf("\n enter two numbers to find HCF: ");
    scanf("%d %d", &num1, &num2);
    res = hcf(num1, num2);
    printf("\n hcf of entered number %d and %d is : %d", num1, num2, res);
    return 0;
}
int hcf(int num1, int num2)
{
 if(num1%num2==0)
    return num2;
else
if(num2%num1==0)
    return num1;
else
if(num1>num2)
    hcf(num1%num2,num2);
else
    hcf(num1,num2%num1);
}