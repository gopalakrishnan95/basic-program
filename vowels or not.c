#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("\n enter the word:");
scanf("%s",a);
strupr(a);
if((strcmp(a,"A")==0) || (strcmp(a,"E")==0) || (strcmp(a,"I")==0) || (strcmp(a,"U")==0) || (strcmp(a,"O")==0))
{
printf(" vowels");
}
else
{
printf("\n consonant");
}
getch();
}
