#include<stdio.h>
main()
{
    int k,n=0,i,j,l;
    printf("Height:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    for(j=0;j<=n-i-1;j++)
        {
            printf("%s"," ");
        }//spaces
     for (l = 0; l < 2; l++)
     {
        for(k=0;k<i+1;k++)
            {
                printf("#");
            }//sets
        printf(" ");
        }
    printf("\n");
    }
}



