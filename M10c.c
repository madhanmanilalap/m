#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the Temperature in Celsius:");
scanf("%d",&a);
b=a+273;
printf("Temperature in Kelvin:%d",b);
getch();
}
