#include<conio.h>
#include<stdio.h>
void prm(void);
int main()
{
      //int c;
      //c=prm();
      prm();
      getch();
}
void prm()
{
    int a,b,i,j;
    printf("enter a the interval in which we have to calculate prime no.");
    scanf("%d %d",&a,&b);
    while(a<b)
    {
        i=1;
        for(j=2;j<=a/2;j++)
        {
          if(a%j==0)
          i=0;
          break;
        }
        if(i==1)
        {
            printf("%d\t",a);
        }
        a++;

    }

}


