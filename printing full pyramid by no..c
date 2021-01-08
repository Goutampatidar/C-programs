#include<stdio.h>
#include<conio.h>

int main()

{
    int i,j,n,k,a;
    printf("enter no. of rows");
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=a;j++)
        {

            printf(" ");
        }
        a--;
        for(k=1;k<=i;k++)
        {

            printf("%d ",k);

        }
        printf("\n");
    }
    getch();
}


