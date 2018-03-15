#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,c=0,b[5],j;
clrscr();
printf("Enter the Number:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
b[i]=a[i];    
c++;
}
i=0;
for(j=c-1;j>=0;j--)
{
b[i]=a[j];
i++;
}
printf("Reverse Number:");
for(i=0;i<c;i++)
{
printf("%d",b[i]);
}
getch();
}
