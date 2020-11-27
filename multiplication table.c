#include<stdio.h>
#include<conio.h>
int main()
{

    int i,a,mult;
    printf("enter any no. ");
    scanf("%d",&a);
    for (i=0;i<=10;i++)
    {
        mult=a*i;
        printf("%d*%d=%d\n",a,i,mult);
    }
    getch();
}
