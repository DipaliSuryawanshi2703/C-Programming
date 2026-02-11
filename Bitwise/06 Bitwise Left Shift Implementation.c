#include<stdio.h>
#include<conio.h>

int main()
{

    int No1 = 0, Res = 0;

    printf("\n Enter The Number =   ");
    scanf("%d",&No1);
    printf("\n ========================================\n");

    Res = No1 << 5 ;

    printf("\n Result => %d left Shifted by  5 = %d ", No1, Res);

    printf("\n ========================================\n");

    getch ();
    return 0;


}
