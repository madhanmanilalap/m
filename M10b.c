#include<stdio.h>
#include<conio.h>
void main()
{
int a,b[10],i,c=0;
clrscr();
scanf("%d",&a);
printf("Enter the n Numbers:\n");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
c=c+b[i];
}
printf("%d",c);
getch();
}
