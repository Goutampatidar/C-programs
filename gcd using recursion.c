#include<conio.h>
#include<stdio.h>
#include<math.h>
int gcd(int,int);

int main()
{
    int a,b,s
    ;
    printf("enter the two positive no");
    scanf("%d%d",&a,&b);
    s=gcd(a,b);
    printf("The gcd of %d & %d is %d",a,b,s);
    getch();

}
int gcd(int n, int m)
{
 if (m!=0)
 {
     return gcd(m,n%m);
 }
 else
 return(n);

}

