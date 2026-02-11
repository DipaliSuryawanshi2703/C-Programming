#include<stdio.h>
#include<conio.h>

int main()
{

    int No = 0, Res = 0;

    printf("\n Enter The 1st Number =   ");
    scanf("%d",&No);

    printf("\n ========================================\n");

   Res = No >> 2;

    printf("\n Result =>  Right Shift %d = %d ", No, Res);

    printf("\n ========================================\n");

    getch ();
    return 0;


}


