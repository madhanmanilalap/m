#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0;
printf("Enter the Number:");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c++;
a/=10;
}
printf("No of Digits:%d",c);
getch();
}
