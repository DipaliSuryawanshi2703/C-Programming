#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Bill(int[],int );
void Display_Bills(int[],int);
int Count_Of_Bills(int[],int);
int Even_Count_Of_Bill(int[],int);
int Odd_Count_Of_Bill(int[],int);
int Zero_Count_Of_Bill(int[],int);
int Sum_Of_Bill(int[],int);
int Maximum_Bill(int[],int);
int Minimum_Bill(int[],int);
int Max_Second_Bill(int[],int);

void Accept_Bill(int Bill[],int i)
{
    int Cnt = 0;

    for(Cnt=0 ; Cnt< i; Cnt++)
    {
        printf("\n Enter The Number %d = ",Cnt+1);
        scanf("%d",&Bill[Cnt]);
    }
 return;
}
void Display_Bills(int Bill[],int i)
{
    int Cnt = 0;

    for(Cnt=0 ; Cnt< i; Cnt++)
    {
        printf("\n The Given Number %d = %d",Cnt+1,Bill[Cnt]);

    }
    return;
}
int Count_Of_Bills(int Bill[],int sizes)
{
    int i = 0, Ct = 0;

    for(i = 0; i < sizes ; i++)
    {
        if( Bill[i] != 0)
        {
            Ct++;
        }
    }
    return Ct;
}
int Even_Count_Of_Bill(int Bill[], int sizes)
{
    int i =0, E_Cnt =0;

      for(i = 0 ; i < sizes; i++)
    {
        if( Bill[i] % 2 == 0 && Bill[i] != 0)
        {
            E_Cnt++;
        }
    }
    return E_Cnt;
}
int Odd_Count_Of_Bill(int Bill[],int sizes)
{
    int i =0, O_Cnt =0;
      for(i = 0 ; i < sizes ; i++)
    {
        if( Bill[i] % 2 == 1 && Bill[i] != 0)
        {
            O_Cnt++;
        }
    }
    return O_Cnt;
}
int Zero_Count_Of_Bill(int Bill[],int sizes)
{
    int i =0, Z_Cnt =0;

      for(i = 0 ; i < sizes; i++)
    {
        if( Bill[i] == 0)
        {
            Z_Cnt++;
        }
    }
    return Z_Cnt;
}
int Sum_Of_Bill(int Bill[],int sizes)
{
     int i = 0 , Bill_Sum = 0;

    for(i = 0; i < sizes ; i++)
    {
        Bill_Sum = Bill_Sum + Bill[i];
    }
    return Bill_Sum;

}
int Maximum_Bill(int Bill[],int sizes)
{
    int i =0, Max_Bill = 0;

   for(i = 0; i < sizes ; i++)
    {
       if(i == 0 || Bill[i] > Max_Bill)
        {
            Max_Bill = Bill[i];
        }
    }
    return Max_Bill;
}
int Minimum_Bill(int Bill[],int sizes)
{
    int i =0, Min_Bill = 0;

    for(i = 0; i < sizes ; i++)
    {
        if(i == 0 || Bill[i] < Min_Bill)
        {
            Min_Bill = Bill[i];
        }
    }
    return Min_Bill;
}
int Max_Second_Bill(int Bill[],int sizes)
{
    int i = 0, flag = -1, Max2 =0, Max_Bill = 0;

    for(i = 0; i < sizes ; i++)
    {
       if(i == 0 || Bill[i] > Max_Bill)
        {
            Max_Bill = Bill[i];
        }

    }
    for(i = 0; i < sizes; i++)
    {
        if( Bill[i] != Max_Bill )
        {
            if (flag == -1 || Bill[i] > Max2)
            {
                Max2 = Bill[i];
            }
            flag = 1;
        }
    }
    return Max2;
}




