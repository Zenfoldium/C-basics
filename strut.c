#include<stdio.h>
int main()
{
    struct result
    {
        int num, mark,rank;
    };
    struct result r[10],b[10];
    int i;

    b[0].mark=1;
    b[0].num=12;
    b[0].rank=0;
    
    for ( i = 0; i < 5; i++)
    {
        scanf("%d%d%d",&r[i].num,&r[i].mark,&r[i].rank );
    }

    printf("The Enrolment number mark and rank of the students are :\n");
    for(i=0; i<5; i++)
    printf("%d, %d, %d\n", r[i].num, r[i].mark, r[i].rank);
    printf("%d, %d, %d\n", b[0].num, b[0].mark, b[0].rank);
}