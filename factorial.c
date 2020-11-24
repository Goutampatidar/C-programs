#include<stdio.h>
#include<conio.h>
int main()
{
    int fact=1,a,i;
    printf("enter any no. ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;

    }
    printf("factorial of the given no. is %d",fact);
    getch();
}
