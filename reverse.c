#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,i,b=0,c;
    printf("enter any no.");
    scanf("%d",&a);
    for(i=1;a!=0;i++)
   {

    c=a%10;
    a=a/10;
    b=b*10+c;
}
printf("reverse of given no .is %d",b);
getch();
}
