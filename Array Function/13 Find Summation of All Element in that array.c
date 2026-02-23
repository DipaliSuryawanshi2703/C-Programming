#include<stdio.h>
#include<conio.h>
#define Size 10

int main()
{
    int Num[Size] = {}, Cnt = 0 , Sum = 0 , i =0;

    printf("\n Enter The All Elements To Find The Sum Of The Element \n");

    Accept_Number(Num);

    getch();
    system("cls");
    Display_Number(Num);
    getch();
    Sum = Sum_Of_All(Num);

    printf("\n============================================\n");
    printf("\n Sum Of All Elements Is =  %d",Sum);
    getch();
    return 0;
}
int Sum_Of_All(int Num[])
{
     int i = 0 , Num_Sum = 0;

    for(i = 0; i < Size ; i++)
    {
        Num_Sum = Num_Sum + Num[i];
    }
    return Num_Sum;

}
void Accept_Number(int Num[])
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf("\n Enter The Element %2d  : ",i+1 );
        scanf("%d",&Num[i]);
    }
    printf("\n All Number Accepted Successfully");
    return ;

}
void Display_Number(int Num[])
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf("\n The Number %d  :  %2d",i+1 ,Num[i]);
    }
    printf("\n All Number Display Successfully");
    return ;


}
