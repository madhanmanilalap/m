#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i;
clrscr();
printf("Enter the Numbers Upto Sum:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b=b+=i;
}
printf("Sum:%d",b);
getch();
}
