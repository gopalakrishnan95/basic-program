#include<stdio.h>
#include<conio.h>
void main()
{
int a,count=0,b;
clrscr();
printf("\n enter the inter:");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++count;
}
printf("%d",count);
getch();
}

