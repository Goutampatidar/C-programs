#include<stdio.h>
#include<conio.h>
int main()
{

    int a,i,sum=0;
    do{
    printf("enter any positive no.\n");
    scanf("%d",&a);
    }while (a<0);
    for(i=0;i<=a;i++)
    {
        sum=sum+i;


    }
    printf("the sum of no . is %d\n",sum);
    getch();
}
