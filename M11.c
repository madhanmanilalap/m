#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the Number:");
scanf("%d",&a);
while(a%2==0)
{
a/=2;
}
printf("%d",a);
getch();
}
