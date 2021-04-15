//recursion prog
#include<stdio.h>
int bin(int a,int base,int b);
int main()
{
    int dec,binary;
    printf("Enter the decimal number:");
    scanf("%d",&dec);

    binary=bin(dec,1,0);
    printf("\n%d",binary);
}

int dectobin(int a,int base,int b)
{
    int dig;
    dig=a%2;
    b=b+base*dig;
    if(a==0)
    return b;
    return dectobin(a/2,base*10,b);
}