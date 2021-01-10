#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
    SYSTEMTIME s;
    GetSystemTime(&s);

    printf("%d/%d/%d  \n \n \t \t",s.wDay,s.wMonth,s.wYear);
    fflush(stdin);
    GetLocalTime(&s);
    printf("%d:%d:%d:%d",s.wHour,s.wMinute,s.wSecond,s.wMilliseconds);
    getch();
}
