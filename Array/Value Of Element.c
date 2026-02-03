/// 07 Accept Array Elements from User & Then Display All Elements
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i = 0, j = 0, Values[5] = {0};

    for(i = 0, j = 101 ; i < 5 ; i++, j++)
    {
        printf("\n Value Of %d Element = %d",j, Values[i]);
    }

    for(i = 0, j = 1001 ; i < 5 ;  i++, j++ )
    {
        printf("\n Enter Element No %d = ", j);
        scanf("%d",&Values[i]);
    }

    _getch();
    system("cls");

    printf("\n\n Elements in Array are => \n\n");

    for(i = 0, j = 101 ; i < 5 ; i++, j++)
    {
        printf("\n Value Of %d Element = %d",j, Values[i]);
    }

    _getch();
    return 0;
}
