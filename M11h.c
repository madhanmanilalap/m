#include<stdio.h>
#include<conio.h>
void main()
{
int A,B,C,d=0,e,i;
clrscr();
printf("Enter the First Number:");
scanf("%d",&A);
printf("Enter the Difference:");
scanf("%d",&B);
printf("Enter the Total Terms:");
scanf("%d",&C);
d=(C*(2*A+(C-1)*B)/2);
e=A+(C-1)*B;
printf("Sum:");
for(i=A;i<=C;i++)
{
if(i!=C)
{
printf("%d+",i);
}
else
printf("%d=%d",i,d);
}
getch();
}
