#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n enter the number:");
scanf("%d",&a);
if(a>0)
{
printf("\n positive");
}
else if(a<0)
{
printf("\n negative");
}
else
{
printf("\n zero");
}
getch();
}
