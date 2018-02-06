#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,c;
printf("Enter the first interval:");
scanf("%d",&a);
printf("Enter the second interval:");
scanf("%d",&c);
for(i=a+1;i<c;i++)
{
if(i%2==0)
{
printf("%d",i);
}}
getch();
}
