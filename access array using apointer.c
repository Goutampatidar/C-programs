#include<stdio.h>
#include<conio.h>
void ptr(int* );
int main()
{
    int a[3],i;

    printf("enter value of first matrix");
    for(i=0;i<=2;i++)
    {

            scanf("%d",&a[i]);

    }
    for(i=0;i<=2;i++)
    {

          printf("%d",*(a+i));
        printf("\n");
    }

    getch();
}
