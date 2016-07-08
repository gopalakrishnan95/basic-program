#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the 1 number:");
scanf("%d",&a);
printf("\n enter the 2 number:");
scanf("%d",&b);
printf("\n enter the 3 number:");
scanf("%d",&c);
if((a>b)&&(a>c))
{
printf("\n the max value %d",a);
}
else if((b>a)&&(b>c))
{
printf("\n the max value %d",b);
}
else if((c>a)&&(c>b))
{
printf("\n the max value %d",c);
}
getch();
}



