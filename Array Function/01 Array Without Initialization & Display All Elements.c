#include<stdio.h>
#include<conio.h>

void Null_Intialization(int No[]);
int main()
{   int No[5];
    Null_Intialization(No);
    getch();
    return 0;
}
void Null_Intialization(int No[])
{


    printf("\n Enter Five Numbers ==> \n");

    printf("\n First Number = %d",No[0]);
    printf("\n Second Number = %d",No[1]);
    printf("\n Third Number = %d",No[2]);
    printf("\n Fourth Number = %d",No[3]);
    printf("\n Fifth Number = %d",No[4]);
}
