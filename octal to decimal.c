#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,c=0,j=0;
    printf("enter any no.");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=c+b*pow(8,j);
        j++;
        a=a/10;

    }
   printf("the converstion of the given no. is %d",c);

    getch();
}
