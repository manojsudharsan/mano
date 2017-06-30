#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n enter the character:");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
{
printf("\n alphabet");
}
else
{
printf("\n not an alphabet");
}
getch();
}
