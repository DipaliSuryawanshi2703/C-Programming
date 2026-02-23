#include<stdio.h>
#include<conio.h>
#define Size 10

void Accept_Number(int Num[]);
int Min_Number(int Num[]);
int main()
{
    int Num[Size] = {}, Min = 0;

    printf("\n Enter The All Element =>  \n");

    Accept_Number(Num);

    printf("\n ===================************=================");
    Min = Min_Number(Num);

    printf("\n The Minimum Number From Given Element Is %d ",Min);
    printf("\n ===================************=================");
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
