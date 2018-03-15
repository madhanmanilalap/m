#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int c,i,d=0,j;
clrscr();
printf("Enter the String:");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
d++;
}
for(i=0;i<d;i++)
{
for(j=i+1;j<d;j++)
{
if(a[i]>=a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf("The Lexicropical order:");
for(i=0;i<d;i++)
{
printf("%c",a[i]);
}
getch();
}
