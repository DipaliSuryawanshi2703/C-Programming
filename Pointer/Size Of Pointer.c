#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 27, iNum = 3;
    int *No = &iNo;
    int *Num = &iNum;

    printf("\n Size Of iNo = %d ",sizeof(iNo));
    printf("\n Size Of iNum = %d ",sizeof(iNum));
    printf("\n Size Of *No = %d ",sizeof(*No));
    printf("\n Size Of *Num = %d ",sizeof(*Num));
    printf("\n Size Of &No = %d ",sizeof(&No));
    printf("\n Size Of &Num = %d ",sizeof(&Num));
    getch();
    return 0;
}
