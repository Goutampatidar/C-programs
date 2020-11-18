 #include<stdio.h>
 #include<conio.h>
 void even(void);

int main ()
{
even();
getch();
}
even ()
{
    int a;
    printf("enter any no.");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("no. is even");

    }
    else
    {
        printf("no. is odd");
    }
}
