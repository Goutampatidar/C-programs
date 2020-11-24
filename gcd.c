
#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,gcd,i;
    printf("enter any two no.\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0   )
        {
            gcd=i;
        }
    }
    printf("the gcd of two no. is %d &%d=%d",a,b,gcd);
    getch();
}
