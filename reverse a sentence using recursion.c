#include<string.h>
#include<stdio.h>
#include<conio.h>
void rev(char* a,int n);

int main()
{
    char a[30];


    printf("enter any sentense\n");
    gets(a);
    printf("the sentence is %c",a);
    rev(a,strlen(a));

}
void rev(char* a, int n)
{
    if(n<1)
    {
        return;
    }
    printf("%c",a[n-1]);
    rev(a,n-1);

}
