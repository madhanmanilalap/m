#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c[20],i,d=0;
clrscr();
printf("Enter the Size:");
scanf("%d",&a);
printf("Enter the Numbers:\n");
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
}
printf("Enter the Number:");
scanf("%d",&b);
for(i=0;i<a;i++)
{
if(c[i]==b)
{
d++;
}}
printf("No.of Repeats:%d",d);
getch();
}
