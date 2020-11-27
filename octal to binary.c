#include<stdio.h>
#include<conio.h>
#include<math.h>
int od(int a);
void db(int a);
int main()
{
    int a,n;
    printf("enter any no. to convert");
    scanf("%d",&a);
    n=od(a);
    db(n);
    getch();
}
int od(int a)
{
    int b,c=0,j=0;
   // printf("enter any no.");
    //scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=c+b*pow(8,j);
        j++;
        a=a/10;

    }
return(c);
}

void db(int a)
{
    int b,c=0,i=1;
    //printf("enter any no. to convert it into binary");
    //scanf("%d",&a);
    while(a!=0)
    {
        b=a%2;
        a=a/2;
        c=c+b*i;
        i=i*10;
    }
    printf("the binary of given no. is %d",c);
}

