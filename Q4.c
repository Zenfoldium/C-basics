#include<stdio.h>
int HCF(int a,int b);
int main()
{   
    int a,b,c;
    printf("Enter three elemets:");
    scanf("%d%d%d",&a,&b,&c);
    int h1,h2,h3;
    h1=HCF(a,b);
    h2=HCF(b,c);
    h3=HCF(c,a);
    printf("HCF is %d\n",HCF(h1,h2));
}
int HCF(int a, int b)
{
    int x;
    x=a%b;
    if(x==0)
    return b;
    return HCF(b,x);

}