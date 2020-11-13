#include<stdio.h>
#include<conio.h>
int add (void );
main()
{
    int a;
    a= add();
    printf("sum of no. are %d",a);
    getch();
}
int add()
{
    int b,c,d;
    printf("enter any no.");
    scanf("%d%d",&b,&c);
    d=b+c;
    return (d);
}
