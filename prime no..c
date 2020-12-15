#include<stdio.h>
#include<conio.h>

 int main()
 {
     int a,b=0,i;
     printf("enter any positive integer");
     scanf("%d",&a);

         for(i=2;i<=a/2;++i)
         {
             if(a%i==0)
             {
                 b=1;
                 break;
             }
         }
         if (a==1)
         {
             printf("the no. is neither prime nor composite");
         }
         else
         {
             if(b==0)
                printf("%d is  a prime no.",a);
             else
                printf("%d is not a prime no.",a);
         }
         getch();
 }
