#include <stdio.h>
#include<conio.h>

int main()
{

    int n , j ,i;

    printf("\n Enter the Row Of The Pyramid =   ");
    scanf("%d",&n);

    for(i = 1; i < (n+1)/2; i++ )
    {
        for(j = 1; j <= (n+1)/2 - i; j++)
        {

            printf("   ");
        }
        for(j = 1; j <= (2*i)-1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
