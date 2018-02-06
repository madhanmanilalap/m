#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n,b,i;
clrscr();
printf("Enter n:");
scanf("%d",&n);
i=n;
while(n>0)
{
b=n%10;
a=a+(b*b*b);
n=n/10;
}
if(i==a)
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}
