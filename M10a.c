#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("Length:");
scanf("%d",&a);
printf("Width:");
scanf("%d",&b);
printf("Height:");
scanf("%d",&c);
d=a*b;
printf("Surface Area:%d",d);
e=a*b*c;
printf("\nVolume:%d",e);
getch();
}
