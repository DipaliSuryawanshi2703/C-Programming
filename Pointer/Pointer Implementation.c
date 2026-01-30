#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 27, iNum = 3;
    int *No = &iNo;
    int *Num = &iNum;

    printf("\n The Value Of iNo is %d",iNo);
    printf("\n The Value Of iNum is %d",iNum);
    printf("\n The Value Of *No is %d",*No);
    printf("\n The Value Of *Num is %d",*Num);
    printf("\n The Value Of &iNo is %d",&iNo);
    printf("\n The Value Of &iNum is %d",&iNum);

    getch();
    return 0;
}
