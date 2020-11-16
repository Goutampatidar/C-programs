#include<stdio.h>
#include<conio.h>

int po(int a,int b);
int main()
{
    int a,b,d;
    printf("enter the base no.");
    scanf("%d",&a);
    printf("enter the exponentioal");
    scanf("%d",&b);

    d=po(a,b);
    printf("the no. is %d",d);
    getch();
}
int po(int a,int b)
{
    int s;
    if(b==1)
    {
        return(a);
    }
    s=a*po(a,b-1);
    return(s);
}
