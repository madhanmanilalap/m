#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c[10],i;
clrscr();
printf("Enter the Numbers:");
scanf("%d",&a);
printf("Enter the Numbers:\n");
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
}
printf("Enter the place of Number to printf:");
scanf("%d",&b);
printf("%d",c[b-1]);
getch();
}
