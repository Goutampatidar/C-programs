#include<stdio.h>
#include<conio.h>

int main ()
{
    int a,b=0;
    printf("enter any no.");
    scanf("%d",&a);
while(a!=0)
    {
        //b=a%10;
        a=a/10;
        ++b;
    }
    printf("the no. of digit in given no. is %d",b);
    getch();
}
