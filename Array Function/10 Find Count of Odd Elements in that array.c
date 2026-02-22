#include<stdio.h>
#include<conio.h>
#define size 10

void Accept_Number(int*);
int Odd_Count(int*);
int main()
{
    int Num[size]={} , i = 0, Cnt = 0;

    printf("\n Enter The Numbers \n");
     Accept_Number(Num);
    printf("\n =================*************================== \n");
    Cnt = Odd_Count(Num);
    printf("\n Even Numbers In The File Are %d",Cnt);
    getch();
    return 0;
}
void Accept_Number(int* nptr)
{
     int i = 0;
      for(i = 0 ; i < size; i++)
    {
        printf("\n Enter The Number %d  =>   ",i+1);
        scanf("%d",&nptr[i]);

    }
}
int Odd_Count(int* nptr)
{
    int i =0, Cnt =0;
      for(i = 0 ; i < size; i++)
    {
        if( nptr[i] % 2 == 1 && nptr[i] != 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}


