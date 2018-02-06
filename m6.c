#include<stdio.h>
#include<conio.h>
void main();
{
    int l, h, i, t1, t2, remainder, n = 0, result = 0;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers  %d an %d are: ", l, h);

    for(i = l + 1; i < h; ++i)
    {
        t2 = i;
        t1 = i;
        while (t1 != 0)
        {
            t1 /= 10;
            ++n;
        }
        while (t2 != 0)
        {
            remainder = t2 % 10;
            result += pow(remainder, n);
            t2 /= 10;
        }

        if (result == i) 
        {
            printf("%d ", i);
        }
        n = 0;
        result = 0;

    }
    return 0;
    getch();
}
