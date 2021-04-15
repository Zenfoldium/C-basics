#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int i,fac=1;
    for(i=n;i>0;i--)
    {
        fac=fac*i;
    }
    printf("Factorial of %d is %d \n",n,fac);
}