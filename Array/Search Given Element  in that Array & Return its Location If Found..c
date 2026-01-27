#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0 , Num[10]={};

    printf("\n Enter The Numbers = ");

     for( i=0 ; i < 10 ; i++)
     {
         printf("\n Enter The Number %d  = > ",i+1);
         scanf("%d",&Num[i]);
     }
     printf("\n =================*************================== \n");

    printf("\n Enter Element To Be Searched in Array = ");
    scanf("%d",&j);

    for(i=0 ; i < 10 ; i++)
    {
        if (Num[i] == j)
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
         printf("\n Number %d Found at Index %d .", j, i+1 );
    }
    getch();
    return 0;
}

