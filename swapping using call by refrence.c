
#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b,int*c );
int main()
{
    int a,b,c;
    printf("enter three no.");
    scanf("%d  %d %d",&a,&b,&c);
    printf("before swaoping a=%d,b=%d,c=%d\n",a,b,c);
    swap(&a,&b,&c);

    getch();
}
void swap(int*a,int*b,int*c)
{
    int k;
    k=*a;
    *a=*b;
    *b=*c;
    *c=k;
    printf("after swaoping a=%d,b=%d,c=%d",*a,*b,*c);
}
