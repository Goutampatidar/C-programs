#include<stdio.h>
#include<conio.h>


int main ()
{
    int a,b,c=0,i=1;
    printf("enter any no. to convert it into binary");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%2;
        a=a/2;
        c=c+b*i;
        i=i*10;
    }
    printf("the binary of given no. is %d",c);
    getch();
}
