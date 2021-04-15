//nandkishore 2021-03-16
#include<stdio.h>
int main()
{
    int n,i,x,count=0;
    printf("Enther the number of elements:");
    scanf("%d",&n);
    
    int array[n];
    for  ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the letter you want to find:");
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {
        x==array[i]?printf("position:   %d\n",i)&&count++:0;
    }
    printf("Number of times it appear:  %d",count);
}
