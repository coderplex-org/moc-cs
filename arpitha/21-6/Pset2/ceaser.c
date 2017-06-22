#include<stdio.h>
#include<stdlib.h>
int main()
{
    char q[100];
    int n,i,j,k;
    printf("Enter the string: ");
    gets(q);
    printf("Difference: ");
    scanf("%d",&n);

    for(i=0;i<strlen(q);i++)
    {
        if(q[i]>=97&&q[i]<=122)
        {
            printf("%c",q[i]+n);
        }
    }

}
