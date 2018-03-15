#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int b=0,i,j,c=0;
clrscr();
printf("Enter the String:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
b++;
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]==a[j])
c++;
}}
if(c==0)
{
printf("Yes");
}
else
printf("No");
getch();
}
