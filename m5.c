#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,c=0;
        clrscr();
        printf("\n Please Give The Value of N:  ");
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            printf("\n 5 * %d = %d",i,5*i);
        }
        
        getch();
}
