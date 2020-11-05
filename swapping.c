#include<stduio.h>
#include<conio.h>
int main()
{

    int a,b,c;
    printf("enter any no.");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the no. after swapping are %d%d",a,b);
    getch();

}
