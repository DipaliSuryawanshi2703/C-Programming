#include<stdio.h>
#include<conio.h>

void Element(int No[]);
int main()
{
    int No[7]= {12,23,45,67,-34,45,90};

    Element(No);

    getch();
    return 0;
}
    void Element(int No[])
    {
        printf("\n Enter Five Numbers ==> \n");

        printf("\n First Number   = %d",No[0]);
        printf("\n Second Number  = %d",No[1]);
        printf("\n Third Number   = %d",No[2]);
        printf("\n Fourth Number  = %d",No[3]);
        printf("\n Fifth Number   = %d",No[4]);
        printf("\n Sixth Number   = %d",No[5]);
        printf("\n Seventh Number = %d",No[6]);
    }

