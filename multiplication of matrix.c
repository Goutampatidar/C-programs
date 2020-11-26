

#include<stdio.h>
#include<conio.h>


 int main()
 {
     int i,j,sum,k;
     int a[3][3],b[3][3],c[3][3];
     printf("enter value of 1 st x");
     for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     printf("enter value of 2 nd x");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     printf("enter value of 3 rd x");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             for(k=0;k<=2;k++)
             {
             sum=0;
             sum=sum+a[i][k]*b[k][j];
             c[i][j]=sum;

             }
         }

     }
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             printf("%d",c[i][j]);
         }
         printf("\n");
     }
     getch();
}
