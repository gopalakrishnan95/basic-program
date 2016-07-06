#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n enter the number:");
scanf("%d",&a);
if((a%=2)==0)
{
printf("\n even");
}
else
{
printf("\n odd");
}
getch();
}
