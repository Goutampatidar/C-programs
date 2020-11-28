#include<conio.h>
#include<stdio.h>
 int main ()
 {
     int a,b,c;
     printf("enter any no. for base");
     scanf("%d",&a);
     printf("enter any no. for exponential");
     scanf("%d",&b);
     c=pow(a,b);
     printf("the no. is %d",c);
     getch();

 }
