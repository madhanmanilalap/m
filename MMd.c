#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
char b[25];
clrscr();
printf("Enter the Length of string:");
scanf("%d",&a);
printf("Enter the String:");
scanf("%s",&b);
for(i=a-1;i>=0;i--)
{
if((b[i]!='a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u') && (b[i]!='A' && b[i]!='E' && b[i]!='I' && b[i]!='O' && b[i]!='U'))
printf("%c",b[i]);
}
getch();
}
