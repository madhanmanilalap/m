#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b,i,j;
clrscr();
printf("Enter the Size:");
scanf("%d",&b);
printf("Enter the Numbers:\n");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
j=i+1;        
if(a[i]>a[j])
{
printf("%d",j);
}}
getch();
}
