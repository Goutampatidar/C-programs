#include<conio.h>
#include<stdio.h>
#include<math.h>
int num(int);

int main()
{
    int a,s;
    printf("enter the no.upto which we have to find sum");
    scanf("%d",&a);
    s=num(a);
    printf("The sum of %d natural no. is %d",a,s);
    getch();

}
int num(n)
{
    int s;
 if (n==1)
 {
     return(1);
 }
 s=n+num(n-1);
 return(s);

}
