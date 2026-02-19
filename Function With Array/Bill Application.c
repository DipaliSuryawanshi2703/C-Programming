#include"Calculation function.h"
#include<stdio.h>



int main()
{
    int Bill[7] = {}, Choice = 0,Size = 7, Res = 0;


  printf("\n ================ ******* ================ \n");
  printf("\n\n         Welcome To Bill Application \n\n");
    while(1)
    {
        printf("\n Given Choice = ");
        printf("\n\t  Choice 1  : Accept Bill ");
        printf("\n\t  Choice 2  : Display  All Bills ");
        printf("\n\t  Choice 3  : Count Of Bill ");
        printf("\n\t  Choice 4  : Even Count of Bill ");
        printf("\n\t  Choice 5  : Odd Count Of Bill ");
        printf("\n\t  Choice 6  : Zero Count Of Bill ");
        printf("\n\t  Choice 7  : Sum Of Bill ");
        printf("\n\t  Choice 8  : Maximum Bill ");
        printf("\n\t  Choice 9  : Minimum Bill ");
        printf("\n\t  Choice 10 : Second Maximum Bill ");
        printf("\n\t  Choice 11 : Exit ");
        printf("\n\n\t Enter Your Choice =>   ");
        scanf("%d",&Choice);

  printf("\n ================ ******* ================ \n");

        switch(Choice)
        {
        case 1 :
            printf("\n Accept All Bills :     \n");

            Accept_Bill(Bill,Size);

            printf("\n All Bills Accept Successfully");

            getch();
            system("cls");

            break;
        case 2:
            printf("\n Display All Bills :    \n ");

            Display_Bills(Bill,Size);

            printf("\n All Bills Display Successfully");
            getch();
            system("cls");

            break;

        case 3:
            Res = Count_Of_Bills(Bill,Size);

            printf("\n Count Of Given Element Are => %d",Res);
            getch();
            system("cls");
            break;
        case 4:
            Res = Even_Count_Of_Bill(Bill,Size);
            printf("\n  Even Count Of Given Element Are => %d",Res);
            getch();
            system("cls");
            break;
        case 5:
            Res = Odd_Count_Of_Bill(Bill,Size);
            printf("\n  Odd Count Of Given Element Are => %d",Res);
            getch();
            system("cls");
            break;
        case 6:
            Res = Zero_Count_Of_Bill(Bill,Size);
            printf("\n  Even Count Of Given Element Are => %d",Res);
            getch();
            system("cls");

            break;
        case 7:
            Res =Sum_Of_Bill(Bill,Size);
            printf("\n  Sum Given Bills Are => %d",Res);
            getch();
            system("cls");

            break;
        case 8:
            Res = Maximum_Bill(Bill,Size);
            printf("\n Maximum Amount Of bill => %d",Res);
            getch();
            system("cls");

            break;
        case 9:
            Res = Minimum_Bill(Bill,Size);
            printf("\n Minimum Amount Of bill => %d",Res);
            getch();
            system("cls");

            break;
        case 10:
            Res = Max_Second_Bill(Bill,Size);
            printf("\n Second Maximum Amount Of bill => %d",Res);
            getch();
            system("cls");

            break;

        case 11:
            fflush(stdin);
             printf("\n Are you sure do you want to quit??? ");
             printf("\n for Yes Enter 1 :   ");
             scanf("%d",&Choice);

            if(Choice == 1)
            {
                goto Dwn;
            }

            system("cls");
            break;

        default:
            printf("\n Invalid Choise");
            printf("\n Try Again....");
            system("cls");
            break;
        }
    }

   Dwn:
    printf("\n ========== ******* ========== \n");
    printf("\n Thanks for using our service!!!\n");


    getch();
    return 0;
}



