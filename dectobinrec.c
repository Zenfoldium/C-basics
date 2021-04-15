//recursion prog
#include<stdio.h>
// int dectobin(int a);
int main()
{
    int dec,bin;
    printf("Enter the decimal number:");
    scanf("%d",&dec);

    bin=dectobin(dec,1,0);
    printf("\n%d",bin);
}

int dectobin(int a,int base,int bin)
{
    int dig;
    if(a==0)
    return bin;
    dig=a%2;
    bin=bin+base*dig;
    // base=base*10;
    dectobin(a/2,base*10,bin);
}