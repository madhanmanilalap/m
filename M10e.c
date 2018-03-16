#include<stdio.h>
#include<conio.h>
void main()
{
int P,T,R,F;
clrscr();
printf("Enter the Amount:");
scanf("%d",&P);
printf("Enter the Time:");
scanf("%d",&T);
printf("Enter the Rate:");
scanf("%d",&R);
F=(P*T*R)/100;
printf("Floor Value:%d",F);
getch();
}
