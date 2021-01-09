#include<stdio.h>
#include<conio.h>

int main()

{
    int i,j,n;
    printf("enter no. two show similar no. of star");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {

            printf("*");
        }
        printf("\n");
    }
    getch();
}
