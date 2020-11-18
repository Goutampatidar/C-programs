#include<conio.h>
#include<stdio.h>

int main()
{
    int a,i;
    printf("enter the no. whose factors to find ");
    scanf("%d",&a);
    printf("the factors of the no. are \n");
    for(i=1;i<a;i++)
    {
     if(a%i==0)
            printf("%d\t",i);


    }
    getch();
}
