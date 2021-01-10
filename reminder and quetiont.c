#include<stdio.h>
#include<conio.h>
void div(int,int);
int main()
{
    int a,b;
    printf("enter any two no.");
    scanf("%d%d",&a,&b);

    div(a,b);
    getch();
}
void div(int e,int f)
{
    int c,d;

    c=e/f;
    d=e%f  ;
    printf("the questiont and reminder of given divisin is %d\n%d",c,d);
}
