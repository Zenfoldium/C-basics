#include<stdio.h>
int main()
{
    int W[4],GD[4],PI[4],PS[4];
    int i;

    printf("Enter the Marks of Writing:\n");
    for ( i = 0; i < 4; i++)
        scanf("%d",&W[i]);
    
    printf("Enter the Marks of GD:\n");
    for ( i = 0; i < 4; i++)
        scanf("%d",&GD[i]);
    
    printf("Enter the Marks of PI:\n");
    for ( i = 0; i < 4; i++)
        scanf("%d",&PI[i]);

    printf("Enter the Marks of PS:\n");
    for ( i = 0; i < 4; i++)
        scanf("%d",&PS[i]);

    int j, temp;
    for ( i = 0; i < 4; i++)
    {
        for ( j = i+1; j < 4; j++)
        {
            if(W[i]<W[j])
            {
                temp=W[j];
                W[j]=W[i];
                W[i]=temp;
            }
            if(GD[i]<GD[j])
            {
                temp=GD[j];
                GD[j]=GD[i];
                GD[i]=temp;
            }
            if(PI[i]<PI[j])
            {
                temp=PI[j];
                PI[j]=PI[i];
                PI[i]=temp;
            }
            if(PS[i]<PS[j])
            {
                temp=PS[j];
                PS[j]=W[i];
                PS[i]=temp;
            }
        }
        
    }
    printf("Total Score:%d\n",W[0]+W[1]+GD[0]+GD[1]+PI[0]+PI[1]+PS[0]+PS[1]);
    
}