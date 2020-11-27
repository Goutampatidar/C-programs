#include<stdio.h>
#include<conio.h>
void mult(void);
int main()
{


mult();
getch();
}
void mult()
{
    int a,b,c;
    printf("enter any two no.");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("the multiplication of two no. is %d ",c);

}
