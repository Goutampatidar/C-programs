#include<stdio.h>
#include<conio.h>

int main()

{
    int i,j,n,k,a,b;
    printf("enter no. of rows");
    scanf("%d",&n);
    a=n;
    b=n;
    for(i=1;i<=n;i++)
    {
        for(j=a;j>=1;j--)
        {

            printf(" ");
        }
        a++;
        for(k=b;k>=1;k--)
        {

            printf("* ");

        }
        b--;
        printf("\n");
    }
    getch();
}


