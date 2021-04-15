#include<stdio.h>
int main()
{
    int num[6];
    int i,test;
    printf("Enter the numbers:\n");
    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter test case:\n");
    scanf("%d",&test);

    int j,k;
    for ( i = 0; i < 6; i++)
    {
        for ( j = i+1; j < 6; j++)
        {
            for ( k = j+1; k < 6; k++)
            {
                if(num[i]+num[j]+num[k]==test)
                printf("%d + %d + %d = %d\n",num[i],num[j],num[k],test);
            }
        }
    }
    
    
}