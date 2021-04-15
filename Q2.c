#include<stdio.h>
int main()
{
    int n;
    printf("How many elements?\n");
    scanf("%d",&n);

    int arr[n],i,temp;
    for ( i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    

    if(n%2==0)
    {
        for (i = 0; i <n/2; i++)
        {
            temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
        }
    }
    else
    {
        for (i = 0; i <(n+1)/2; i++)
        {
            temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
        }
    }

    printf("reversed array:");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}