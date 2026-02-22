#include<stdio.h>
#include<conio.h>
#define Size 10

void Accept_Number(int Num[]);
int Even_Count(int Num[]);
int Odd_Count(int Num[]);
int Zero_Count(int Num[]);
int main()
{
    int Num[Size] = {}, E_Cnt = 0, O_Cnt = 0, Z_Cnt = 0;

    printf("Enter The Elements =>  \n");

    Accept_Number(Num);
    E_Cnt = Even_Count(Num);
    O_Cnt = Odd_Count(Num);
    Z_Cnt = Zero_Count(Num);

    printf("\n In Given Set Of Element = %d Numbers Are Even",E_Cnt);
    printf("\n In Given Set Of Element = %d Numbers Are Odd",O_Cnt);
    printf("\n In Given Set Of Element = %d Numbers Are Zero",Z_Cnt);

    getch();
    return 0;


}
void Accept_Number(int* nptr)
{
     int i = 0;
      for(i = 0 ; i < Size; i++)
    {
        printf("\n Enter The Number %d  =>   ",i+1);
        scanf("%d",&nptr[i]);

    }
}
int Even_Count(int Num[])
{
    int i =0, Cnt =0;
      for(i = 0 ; i < Size; i++)
    {
        if( Num[i] % 2 == 0 && Num[i] != 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}
int Odd_Count(int Num[])
{
    int i =0, Cnt =0;
      for(i = 0 ; i < Size; i++)
    {
        if( Num[i] % 2 == 1 && Num[i] != 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}
int Zero_Count(int Num[])
{
    int i =0, Cnt =0;
      for(i = 0 ; i < Size; i++)
    {
        if( Num[i] == 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}
