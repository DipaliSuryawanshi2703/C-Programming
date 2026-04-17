#include<stdio.h>
#include<conio.h>
#define Size 10

void Accept_Number(int*);
int Max_Number(int*);
int Second_Max_Number(int*,int*);
int main()
{
    int Num[Size] = {}, i = 0, Max = 0,  Max2 = 0;

    printf("\n Enter The All Element =>  \n");
    Accept_Number(Num);
    Max = Max_Number(Num);
    Max2 = Second_Max_Number(Num,Max);

    printf("\n ===================************=================");

    printf("\n The Maximum Number From Given Element Is %d \n",Max);
    printf("\n The Second Maximum Number From Given Element Is %d ",Max2);
    printf("\n ===================************=================");
    getch();
    return 0;
}
void Accept_Number(int* mptr)
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf("\n Enter The Number %d : ",i+1);
        scanf("%d",&mptr[i]);

    }
}
int Max_Number(int* mptr)
{
    int i =0,MaxNo = 0;

    for(i = 0; i < Size ; i++)
    {
        if(i == 0 || mptr[i] > MaxNo)
        {
            MaxNo = mptr[i];
        }
    }
    return MaxNo;
}
int Second_Max_Number(int* mptr,int* nptr)
{
    int i = 0, flag = -1, Max2 =0;
    for(i = 0; i < Size; i++)
    {
        if( mptr[i] != nptr )
        {
            if (flag == -1 || mptr[i] > Max2)
            {
                Max2 = mptr[i];
            }
            flag = 1;
        }
    }
    return Max2;
}
