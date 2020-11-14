 #include<conio.h>
 #include<stdio.h>
 #include<math.h>

 int main()
 {
     int a,b,c,d,r,n=0,i;
     float e=0.0;
     printf("enter any interval to check");
     scanf("%d%d",&a,&b);
     printf("the no.of armstrong no. between %d &%d is",a,b);
    for(i=a+1;i<b;i++)
    {
        d=i;
        c=i;


     while(c!=0)
     {
         c=c/10;
         ++n;
     }

     while(d!=0)
     {
         r=d%10;
         e=e+(pow(r,n));

         d=d/10;
     }
     if((int)e==i)
     {
         printf("%d ",i);
     }
     n=0;
     e=0;

     }

     getch();
 }

