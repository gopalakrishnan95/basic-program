#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("\n enter the character:");
scanf("%s",a);
if((a>='A' && a<='Z') || (a>='a' && a<='z')==0)
{
printf("\n alphabet");
}
else
{
printf("\n NOT");
}
getch();
}
