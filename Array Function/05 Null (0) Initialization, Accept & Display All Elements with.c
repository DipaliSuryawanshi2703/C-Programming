#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Number(int*);
void Display_All(int*);
int main()
{
    int No[7]= {};

    printf("\n Enter Seven Numbers ==> \n");

    Accept_Number(No);

    system("cls");

    printf("\n Press Any Key For Given Seven Numbers ==> \n");

    Display_All(No);
    getch();
    return 0;
}
void Accept_Number(int* bptr)
{
    int Cnt = 0;

    for(Cnt=0 ; Cnt<7; Cnt++)
    {
        printf("\n Enter The Number %d = ",Cnt+1);
        scanf("%d",&bptr[Cnt]);
    }
    return;
}
void Display_All(int* bptr)
{
    int Cnt = 0;
    for(Cnt=0 ; Cnt<7; Cnt++)
    {
        printf("\n The Given Number %d = %d",Cnt+1,bptr[Cnt]);

    }
}




