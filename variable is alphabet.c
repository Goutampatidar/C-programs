#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter any variable");
scanf("%d",&a);
if(a>='a'||a>='A'||a<='z'||a<='Z')
{
    printf("the variable is a alphabet");
}
else
{
    printf("the variable is not a alphabet");

}
getch();
return 0;
}
