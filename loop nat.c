#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,c=0;
clrscr();
printf("\n enter the natural numbers");
scanf("%d",&n);
for(b=0;b<=n;b++)
c=c+b;
printf("\n sum of natural numbers %d",c);
getch();
}
