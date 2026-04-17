#include<stdio.h>
#include<conio.h>
#define size 10

void Accept_Number(int Num []);
int Zero_Count(int Num[]);
int main()
{
    int Num[size]={} , i = 0, Cnt = 0;

    printf("\n Enter The Numbers \n");
     Accept_Number(Num);
    printf("\n =================*************================== \n");
    Cnt = Zero_Count(Num);
    printf("\n Zero In The File Are %d",Cnt);
    getch();
    return 0;
}
void Accept_Number(int Num[])
{
     int i = 0;
      for(i = 0 ; i < size; i++)
    {
        printf("\n Enter The Number %d  =>   ",i+1);
        scanf("%d",&Num[i]);

    }
}
int Zero_Count(int Num[])
{
    int i =0, Cnt =0;
      for(i = 0 ; i < size; i++)
    {
        if( Num[i] == 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}


