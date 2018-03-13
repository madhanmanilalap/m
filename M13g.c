#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c,d;
clrscr();
printf("Enter the Value a:");
scanf("%d",&a);
printf("Enter the value b:");
scanf("%d",&b);
for(i=1;i<=a && i<=b;i++)
{
if(a%i==0 && b%i==0)
{
c=i;
}}
printf("G.C.D:%d",c);
getch();
}
