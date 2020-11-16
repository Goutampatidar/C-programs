#include<math.h>
#include<stdio.h>
#include<conio.h>
int bd(int n);
void Do(int a);

int main()
{
    int n,c;
    printf("enter any no.");
    scanf("%d",&n);
    c=bd(n);
    Do(c);
    getch();
}
void Do(int a)
{
    int r,c=0,i=1;
    //printf("enter any no.to convert");
    //scanf("%d",&a);
    while(a!=0)
    {
        r=a%8;
        a=a/8;
        c=c+(r*i);
        i=i*10;
    }
    printf("the convertion of given no is%d",c);
}
int bd(int n)
{
    int a,b=0,i=0;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        b=b+a*pow(2,i);
        i++;
    }
    return(b);
}
