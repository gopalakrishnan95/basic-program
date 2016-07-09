#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1,i;
clrscr();
scanf("%d %d",&a,&b);
for(i=0;i<b;i++)
{
c=c*a;
}
printf("%d",c);
getch();
}
