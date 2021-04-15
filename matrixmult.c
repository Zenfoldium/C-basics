#include<stdio.h>
int main()
{
    int a[4][4],b[4][4],mult[4][4];
    int i,j;

    printf("Enter elemets of the matrix 1:\n");
    for ( i = 0; i <4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    printf("Enter elemets of the matrix 2:\n");
    for ( i = 0; i <4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for ( i = 0; i <4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            mult[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j]+a[i][3]*b[3][j];
        }
        
    }
    for ( i = 0; i <4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
        
    }
}


// Prog on Matrix, Fibbonaci, Binary recurssion, transpose