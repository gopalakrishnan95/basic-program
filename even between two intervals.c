#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("%d ",i);
}
}
getch();
}
