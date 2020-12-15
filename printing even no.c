#include<stdio.h>
#include<conio.h>


int main()
{
    int a,i;
    printf("enter the no.upto which user want to know even no");
    scanf("%d",&a);
    printf("the even no. are ");
    for(i=2;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
    getch();
}
