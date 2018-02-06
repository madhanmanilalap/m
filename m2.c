#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,i;
clrscr();
printf("enter the 2 intervals:");
scanf("%d%d",&a,&b);
if(a>b)
{
c=a;
a=b;
b=c;
}
printf("%d%d enter the numbers between 2 intervals are:",a,b); 
while(a<b)
d=0;
{
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
d=1;
break;
}
}
if(d==0)
{
printf("%d",a);
a++;
}
}
getch();
}
