#include<stdio.h>
#include<conio.h>
void main()
{
char a[25];
int i;
printf("Enter the Day:");
scanf("%s",a);
if((a[0]=='S')|| (a[0]=='s'))
{
printf("Yes Holiday");
}
else
printf("No.It is not a Holiday");
getch();
}
