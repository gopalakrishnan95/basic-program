#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,c[100]={0},i=0;
clrscr();
printf("Enter dec number:");
scanf("%d",&a);
printf("The binary value of %d is ",a);
do
{
 b=a%2;
 c[i]=b;
 a=a/2;
 i++;
}while(a>0);
 for(;i>=0;i--)
 printf("%d",c[i]);
getch();
}
