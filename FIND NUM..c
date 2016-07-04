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
printf(" positive number");
}
else if(a<0)
{
printf(" negative number");
}
else if(a==0)
{
printf(" zero");
}
getch();
}
