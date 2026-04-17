#include<stdio.h>
#include<conio.h>
#define Size 10

void Accept_Number(int Num[]);
int Max_Number(int Num[]);
int main()
{
    int Num[Size] ={}, Max = 0;

    printf("\n Enter The All Element =>  \n");

    Accept_Number(Num);

    printf("\n ===================************=================");
    Max = Max_Number(Num);

    printf("\n The Maximum Number From Given Element Is %d ",Max);
    getch();
    return 0;
}
void Accept_Number(int Num[])
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf("\n Enter The Number %d : ",i+1);
        scanf("%d",&Num[i]);

    }
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
