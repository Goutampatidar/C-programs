#include<stdio.h>
#include<conio.h>

int main ()
{
    int i,j,k,a,n,b;
    printf("enter no. of row \n");
    scanf("%d",&a);
    n=a;
    for(i=0;i<=a;i++)
    {
       for(j=n;j>=1;j--)
       {
           printf(" ");
       }
       n--;
       b=1;
       for(k=0;k<=i;k++)
       {
           printf(" %d",b);
           b=b*(i-k)/(k+1);
       }
       printf("\n");

    }
    getch();
}
