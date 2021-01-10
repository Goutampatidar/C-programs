#include<stdio.h>
#include<conio.h>

int main()

{
    int i,j,n,k;
    printf("enter no. of rows");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {

            printf(" ");
        }
        for(k=1;k<=i*2-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}

