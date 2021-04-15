#include<stdio.h>
int main()
{
    int ele[5][5];
    int i,j;
    printf("Enter atomic number and atomic mass respectively");

    for  (i = 0; i < 5; i++)
    {
        printf("For element %d\n",i+1);
        printf("Atomic no. and Atomic Mass");
        scanf("%d%d",&ele[i][0],&ele[i][1]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if(ele[i][0]==ele[j][0])
            {
                printf("Isotope:\n");
                printf("(%d,%d) and (%d,%d)\n",ele[i][0],ele[i][1],ele[j][0],ele[j][1]);
            }
        }
        
    }
    
}