#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int a,c,b,i;
    printf("enter the value of the no. which are to be compared \n");
    scanf("%d",&a);
    c=INT_MAX;
    printf("ENTER ANY NO.\n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b<c)
        {
            c=b;
        }
    }
    printf("the minimum no is %d",c);
    return 0;

}
