#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10

void Accept_Bills(int*);
void Disply_Bills(int*);
int Sum_Of_All(int*);
int main()
{
    int Bill[Size] = {}, Bill_Sum = 0;

    printf("\n Enter The All Bills To Find The Sum Of The Bill \n");

    Accept_Bills(Bill);

    getch();
    system("cls");
    Display_Bills(Bill);
    getch();
    Bill_Sum = Sum_Of_All(Bill);


    printf("\n============================================\n");
    printf("\n Sum Of All Elements Is =  %d",Bill_Sum);
}

int Sum_Of_All(int*bptr)
{
     int i = 0 , Bill_Sum = 0;

    for(i = 0; i < Size ; i++)
    {
        Bill_Sum = Bill_Sum + bptr[i];
    }
    return Bill_Sum;

}
void Accept_Bills(int* bptr)
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf("\n Enter The Element %d : ",i+1 );
        scanf("%d",&bptr[i]);
    }
    printf("\n All Bills Accepted Successfully");
    return ;

}
void Display_Bills(int*bptr)
{
    int i = 0;

    for(i = 0; i < Size ; i++)
    {
        printf("\n The Bill No %d :  %d",i+1 ,bptr[i]);
    }
    printf("\n All Bills Display Successfully");
    return ;


}
