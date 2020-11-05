#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],i,j;

    printf("enter value of first matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
         printf("%d",a[j][i]);
        }
            printf("\n");
    }
getch();
}
