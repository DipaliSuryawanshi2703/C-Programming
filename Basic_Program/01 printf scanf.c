#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,  No2 = 0,  Sum = 0;

    printf("\n print 1st number= ");
    scanf("%d",&No1);

    printf("\n print 2nd number= ");
    scanf("%d",&No2);

    Sum = No1 + No2;
    printf("\n Addition=> %d + %d = %d.",No1,No2,Sum);

    getch();
    return 0;
}
