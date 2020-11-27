
#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,i,b=0,c,d;
    printf("enter any no.");
    scanf("%d",&a);
    d=a;
    for(i=1;a!=0;i++)
{

    c=a%10;
    a=a/10;
    b=b*10+c;

}
    printf("value of b%d",b);

    if(d==b)
{
    printf("given no. is a palindrom no.",a);
}
    else
{
    printf("given no. is not palindrom no.",a);
}
    getch();
}
