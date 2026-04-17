#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Num(int No[]);
void Display_Num(int No[]);
int main()
{
    int No[7]= {};

    printf("\n Enter Seven Numbers ==> \n");


    Accept_Num(No);
    system("cls");

    printf("\n Enter Any Key To See All Numbers");
    getch();

    Display_Num(No);

    getch();
    return 0;
}
void Accept_Num(int No[])
{
    printf("\n First Number = ");
    scanf("%d",&No[0]);
    printf("\n Second Number = ");
    scanf("%d",&No[1]);
    printf("\n Third Number = ");
    scanf("%d",&No[2]);
    printf("\n Fourth Number =");
    scanf("%d",&No[3]);
    printf("\n Fifth Number = ");
    scanf("%d",&No[4]);
    printf("\n Sixth Number = ");
    scanf("%d",&No[5]);
    printf("\n Sevanth Number = ");
    scanf("%d",&No[6]);
}
void Display_Num(int No[])
{
    printf("\n First Number = %d",No[0]);
    printf("\n Second Number = %d",No[1]);
    printf("\n Third Number = %d",No[2]);
    printf("\n Fourth Number = %d",No[3]);
    printf("\n Fifth Number = %d",No[4]);
    printf("\n Sixth Number = %d",No[5]);
    printf("\n SeventhNumber = %d",No[6]);
}



