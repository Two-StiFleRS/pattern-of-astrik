#include<stdio.h>

int main()
{
    int i,j,n;

    printf("enter the number of rows ..till which you want to print the pattern of asterik\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i+1;j++)
           {
             printf(" * ");
             if(j==i)
             {
                 printf("\n");
             }
           }

    }
    return 0;
}


