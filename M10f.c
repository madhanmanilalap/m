#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i;
clrscr();
printf("Enter the Number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
b++;
}}
if(b==2)
{
printf("No");
}
else
printf("Yes");
getch();
}
