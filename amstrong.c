 #include<conio.h>
 #include<stdio.h>

 int main()
 {
     int a,b=0,c,d;
     printf("enter any no. to check");
     scanf("%d",&a);
     d=a;
     while(a!=0)
     {
         c=a%10;
         b=b+c*c*c;
         a=a/10;
     }
     if(d==b)
     {
         printf("%d is a  armstrong no.",d);
     }
     else{
        printf("%d no. is not a armstrong no.",d);

     }

     getch();
 }
