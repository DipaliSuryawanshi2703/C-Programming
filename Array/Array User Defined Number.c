#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Num[5]={};

    printf("\n Value Of Five Number => ");
    printf("\n Value Of 1st Number = ");
    scanf("%d",&Num[0]);
    printf("\n Value Of 2nd Number = ");
    scanf("%d",&Num[1]);
    printf("\n Value Of 3rd Number = ");
    scanf("%d",&Num[2]);
    printf("\n Value Of 4th Number = ");
    scanf("%d",&Num[3]);
    printf("\n Value Of 5th Number = ");
    scanf("%d",&Num[4]);

    getch();
    system("cls");///used for clear last output.

    printf("\n Five Values ==> \n");

    printf("\n First Number = %d",Num[0]);
    printf("\n Second Number = %d",Num[1]);
    printf("\n First Third = %d",Num[2]);
    printf("\n First Fourth = %d",Num[3]);
    printf("\n First Fifth = %d",Num[4]);


    getch ();
    return 0;

}

