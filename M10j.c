#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1;
clrscr();
printf("Enter the Number:");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c=c*b;
a/=10;
}
printf("%d",c);
getch();
}
