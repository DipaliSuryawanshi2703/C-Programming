#include<stdio.h>
#include<conio.h>

void Accept_Number(int No[]);
void Search_Index(int []);
int main()
{
    int Num[10]= {};

    printf("\n Enter The Numbers = ");
    Accept_Number(Num);

    printf("\n =================*************================== \n");


    Search_Index(Num);

    getch();
    return 0;
}
void Accept_Number(int No[])
{
    int i = 0 ;

    for( i=0 ; i < 10 ; i++)
    {
        printf("\n Enter The Number %d  = > ",i+1);
        scanf("%d",&No[i]);
    }
}
void Search_Index(int No[])
{
    int i = 0, j = 0;
    printf("\n Enter Element To Be Searched in Array = ");
    scanf("%d",&j);
    for(i=0 ; i < 10 ; i++)
    {
        if (No[i] == j)
        {
            break;
        }
    }
    if ( i== 10)
    {
        printf("\n Number Is Not Found");

    }
    else
    {
        printf("\n Number %d Found at Index %d .", j, i );
    }
}
