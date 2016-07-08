#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b,c=0,d,temp;
printf("Enter the number of elements in array:");
scanf("%d",&b);
printf("Enter the elements of array:");
for(c=0;c<b;c++)
scanf("%d",&a[c]);
for(c=0;c<b;c++)
for(d=0;d<b;d++)
{
if(a[d]>a[d+1]){
temp=a[d];
a[d]=a[d+1];
a[d+1]=temp;
}
}
a[0]=a[0]+a[b-1];
printf("Sum is %d",a[0]);
getch();
}
