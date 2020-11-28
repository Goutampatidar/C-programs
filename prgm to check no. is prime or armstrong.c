#include<stdio.h>
#include<conio.h>
#include<math.h>
void prm(int);
void arm(int);


int main()
{
    int n;
    printf("enter any no. to check ");
    scanf("%d",&n);
     prm(n);
     arm(n);
     getch();
}
void prm(int n)
{
    int i,a=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%2==0)
                a=1;
            break;
        }

    if (a==1)
    {
        printf("no .is not a prime no.");
    }
    else
    {
        printf("no. is prime no..");
    }
}
void arm(int n)
{
    int i,p,q=0,r,m;
    for(i=1;n%i=0;++i)
    {
        r=n%10;
        p=pow(n,r);
        n=n/10;
        q=q+p;
    }
    if (q==m)
        printf("no. is armstrong no.");
    else
        printf("no. is not a armstrong no.");

}
