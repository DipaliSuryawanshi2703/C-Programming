#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Stud
{
    int RNo;
    char Name[40];
    long long int MobNo;
    int Phy;
    int Chem;
    int Maths;
    int Tot;
    float Per;
};

void Accept_Student_Details(struct Stud*, int );
void Display_Student_Details(struct Stud*, int );
void Search_Display_Student_By_RollNo(struct Stud*, int,int);
void Find_Topper(struct Stud*, int);

int main( )
{
    int SCount = 0,Num =0;
    struct Stud *StdPtr = NULL;
    char Choice ='\0';

  while(1){
    printf(" \n Given choise Are :");
    printf("\n Choice 1 :   Add Student Details");
    printf("\n Choice 2 :   Display Student Details");
    printf("\n Choice 3 :   Search Student Details");
    printf("\n Choice 4 :   Topper Student Details");
    printf("\n Choice 5 :   Exit");
    printf("\n\n Enter The Choice :    ");
    Choice = getche();

       switch(Choice){

        case '1':   fflush(stdin);
                    printf("\n Enter How Many Student Details Do You Have : ");
                    scanf("%d",&SCount);

                    StdPtr = (struct Stud*) malloc (SCount * sizeof(struct Stud));

                    Accept_Student_Details(StdPtr, SCount);
                    getch();
                    system("cls");
                    break;


        case '2':    printf("\n Enter Any Key To See All Details : ");
                     getch();

                     printf("\n\n Entered %d Students Details Are => \n\n", SCount);

                     Display_Student_Details(StdPtr, SCount);
                     getch();
                     system("cls");
                     break;


        case '3':    printf("\n Enter Student Roll Number To Search : ");
                     scanf("%d",&Num);
                     Search_Display_Student_By_RollNo(StdPtr,SCount,Num);
                     getch();
                     system("cls");
                     break;


            case '4': printf("\n Topper Details");
                      Find_Topper(StdPtr,SCount);
                      getch();
                      system("cls");
                      break;

            case '5':
                     fflush(stdin);
                     printf("\n Are you sure do you want to quit??? (Yes/ No) : ");
                     Choice = getchar();

                        if(Choice == 'y'|| Choice == 'Y')
                        {
                            goto Dwn;
                        }
                        system("cls");
                        break;



        default:
                        printf("\n INVALID CHOICE!!!");
                        getch();
                        system("cls");

                        break;
}

}
        Dwn:            printf("\n ========== ******* ========== \n");


    getch();
    return 0;
}

void Accept_Student_Details(struct Stud *SPtr, int SCnt)
{
    int i = 0;

    for(i = 0; i < SCnt; i++)
    {
        printf("\n Enter Student Roll No %d Details => \n", i+101);
        SPtr[i].RNo = i + 101;
        fflush(stdin);

        printf("\n Enter Students Name : ");
        gets(SPtr[i].Name);

        printf("\n Enter Students Mobile Number : ");
        scanf("%lld",&SPtr[i].MobNo);

        printf("\n Enter Physics Marks : ");
        scanf("%d",&SPtr[i].Phy);

        printf("\n Enter Chemistry Marks : ");
        scanf("%d",&SPtr[i].Chem);

        printf("\n Enter Mathematics Marks : ");
        scanf("%d",&SPtr[i].Maths);

        SPtr[i].Tot = SPtr[i].Phy + SPtr[i].Chem + SPtr[i].Maths;

        SPtr[i].Per = SPtr[i].Tot / 3.0;
    }

    return;
}

void Display_Student_Details(struct Stud *SPtr, int SCnt)
{
    int i = 0;

    for(i = 0; i < SCnt; i++)
    {
        printf("\n Roll No       : %d.", SPtr[i].RNo);
        printf("\n Name          : %s.", SPtr[i].Name);
        printf("\n Mobile No     : %lld.", SPtr[i].MobNo);

        printf("\n\n Marks    =>\n\tPhysics = %d,\tChemistry = %d,\tMaths = %d.",SPtr[i].Phy, SPtr[i].Chem, SPtr[i].Maths);

        printf("\n\n Total Marks : %d.", SPtr[i].Tot);
        printf("\t Percentage    : %0.2f.", SPtr[i].Per);

        printf("\n\n ============== *** ==============\n");
    }

    return;
}
void Search_Display_Student_By_RollNo(struct Stud *SPtr, int SCnt,int RNum)
{
    int i = 0, found = 0;
    for(i = 0 ; i <= SCnt ; i++)
    {
        if(SPtr[i].RNo == RNum)
        {
            printf("\n Roll No       : %d.", SPtr[i].RNo);
            printf("\n Name          : %s.", SPtr[i].Name);
            printf("\n Mobile No     : %lld.", SPtr[i].MobNo);

            printf("\n\n Marks    =>\n\tPhysics = %d,\tChemistry = %d,\tMaths = %d.",SPtr[i].Phy, SPtr[i].Chem, SPtr[i].Maths);

            printf("\n\n Total Marks : %d.", SPtr[i].Tot);
            printf("\t Percentage    : %0.2f.", SPtr[i].Per);

            printf("\n\n ============== *** ==============\n");

            found = 1;
            break;
        }
    }
    if (found==0)
    {
        printf("\n Student  Roll Number Is Not found");
    }
}
void Find_Topper(struct Stud *SPtr, int SCnt)
{
    int Top = 0,i=0;
    for( i = 0; i <= SCnt; i++ )
    {
        if (SPtr[i].Per > SPtr[Top].Per)
        {
            Top = i;
        }
    }
    printf("\n Roll No       : %d.", SPtr[Top].RNo);
    printf("\n Name          : %s.", SPtr[Top].Name);
    printf("\n Mobile No     : %lld.", SPtr[Top].MobNo);

    printf("\n\n Marks    =>\n\tPhysics = %d,\tChemistry = %d,\tMaths = %d.",SPtr[Top].Phy, SPtr[Top].Chem, SPtr[Top].Maths);

    printf("\n\n Total Marks : %d.", SPtr[Top].Tot);
    printf("\t Percentage    : %0.2f.", SPtr[Top].Per);

    printf("\n\n ============== *** ==============\n");

}
