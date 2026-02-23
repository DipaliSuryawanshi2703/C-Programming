#include<stdio.h>
#include<conio.h>
#define Size 10

void Accept_Number(int Num[]);
int Min_Number(int Num[]);
int Max_Number(int Num[]);
int main()
{
    int Num[Size] = {}, Min = 0, Max = 0;

    printf("\n Enter The All Element =>  \n");

    Accept_Number(Num);

    printf("\n ===================************=================");
    Min = Min_Number(Num);
    Max = Max_Number(Num);


    printf("\n ===================************=================");
    printf("\n The Maximum Number From Given Element Is %d \n",Max);
    printf("\n The Minimum Number From Given Element Is %d \n",Min);
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
int Min_Number(int Num[])
{
    int i =0, MinNo = 0;

    for(i = 0; i < Size ; i++)
    {
        if(i == 0 || Num[i] < MinNo)
        {
            MinNo = Num[i];
        }
    }
    return MinNo;
}
int Max_Number(int Num[])
{
    int i =0,MaxNo = 0;

    for(i = 0; i < Size ; i++)
    {
        if(i == 0 || Num[i] > MaxNo)
        {
            MaxNo = Num[i];
        }
    }
    return MaxNo;
}


