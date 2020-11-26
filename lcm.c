#include<stdio.h>
#include<conio.h>

 int main()
 {
     int a,b,i, min;
     printf("enter any no.");
     scanf("%d%d",&a,&b);
     min=(a>b)?a:b;
     while(1)
     {
         if(min%a==0  &&  min%b==0)
          {

               printf("the lcm of the two no are is %d",min);
               break;
          }
         i++;
     }
     getch();

 }
