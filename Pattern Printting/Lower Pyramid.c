#include <stdio.h>
#include<conio.h>

int main()
{

    int n , j ,i;

    printf("\n Enter the Row Of The Pyramid =   ");
    scanf("%d",&n);

    printf("Pattern is =  \n\n");

    for(i = 1; i <= n/2; i++ )
    {
        for(j = 1; j <=  i; j++)
        {
            printf("   ");
        }
        for(j = 1; j <= n - (2*i); j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

