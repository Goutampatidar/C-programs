#include<stdio.h>
#include<conio.h>
 int main()
 {
     int a,i,s=0;
     printf("enter any no\n");
     scanf("%d",&a);
     for(i=1;i<=a;i++)
     {
         s=s+i;
printf("value of s=%d",s);
     }
     printf("the sum of %d natural no. is %d",a,s);
     getch();
 }
