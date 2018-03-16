#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int b,i,c;
printf("Enter the B:");
scanf("%d",&b);
printf("Enter the size:");
scanf("%d",&c);
printf("Enter the Numbers:");
scanf("%s",a);
for(i=b;i<=c;i++)
{
printf("%c",a[i]);
}
getch();
}
