#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10


void Accept_Number(int*);
void Display(int*);
int Count_Number(int*);
int main()
{
    int Num[Size] = {}, Cnt = 0, i =0 ;

    printf("\n Enter The Numbers => ");
    Accept_Number(Num);
    Count_Number(Num);

    system("cls");
    printf("\n =================*************================== \n");
    Display(Num);

    Cnt = Count_Number(Num);
    printf("\n Number Count Is %d ", Cnt);
    getch();
    return 0;
}
void Accept_Number(int*nptr)
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf( "\n Enter The Number %d = ",i+1);
        scanf("%d",&nptr[i]);

    }
}
int Count_Number(int*nptr)
{
    int i = 0,Ct = 0;
    for(i = 0; i < Size ; i++)
    {
        if( nptr[i] != 0)
        {
            Ct++;
        }
    }
    return Ct;
}
void Display(int* nptr)
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf("\n The Given Number %d is %d \n ", i+1,nptr[i]);

    }
}
