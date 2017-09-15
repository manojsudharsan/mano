#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
clrscr();
printf("\n enter the limit:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("\n %d",i);
++i;
}
getch();
}
