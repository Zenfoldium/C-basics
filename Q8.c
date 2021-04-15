#include<stdio.h>
int main()
{
    int n;
    printf("Enter a numer:\n");
    scanf("%d",&n);

    int a,b,c,d,e,f;
    a=n%10;
    b=(n%100)/10;
    c=(n%1000)/100;
    d=(n%10000)/1000;
    e=(n%100000)/10000;
    f=n/100000;

    if((a+b+c+d+e+f)>=10)
    printf("%d",(a+b+c+d+e+f)/10+(a+b+c+d+e+f)%10);

    else
    printf("%d",(a+b+c+d+e+f));
}