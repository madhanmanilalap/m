#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
clrscr();
printf("Enter the String:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(i==0)
{
if(a[i]>='a' && a[i]<='z')
{
a[i]=a[i]-32;
}}
if(a[i]==' ')
{
i++;
if(a[i]>='a' && a[i]<='z')
{
a[i]=a[i]-32;
}}}
printf("%s",a);
getch();
}
