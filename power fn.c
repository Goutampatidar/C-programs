#include<conio.h>
#include<stdio.h>

int main()
{
    int a,b,c=1;
    printf("enter tha no. of base");
    scanf("%d",&a);
    printf("enter any no of exponentional");
    scanf("%d",&b);
    while(b!=0)
    {
        c=c*a;
        --b;
    }
    printf("the no. is %d",c);
    getch();
}
