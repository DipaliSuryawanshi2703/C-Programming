#include<stdio.h>
#include<conio.h>
#include<string.h>

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

int main()
{
    struct Stud Std [3]= {};
    int i =0;



    for(i = 1; i <= 3; i++)
    {
        printf("\n Enter Student No %d  Details \n",i);
        printf("\n Enter Student Roll Number = ");
        scanf("%d",&Std[i].RNo);

        fflush(stdin);

        printf("\n Enter Student Name = ");
        gets(Std[i].Name);

        printf("\n Enter Mobile Number = ");
        scanf("%lld",&Std[i].MobNo);

        printf("\n Enter Physics Marks = ");
        scanf("%d",&Std[i].Phy);

        printf("\n Enter Chemisty Mark = ");
        scanf("%d",&Std[i].Chem);

        printf("\n Enter Maths Mark = ");
        scanf("%d",&Std[i].Maths);

        Std[i].Tot = Std[i].Phy + Std[i].Chem+ Std[i].Maths;
        printf("\n Total Marks = %d", Std[i].Tot);

        Std[i].Per = Std[i].Tot/3.0;

        printf("\n Percentage = %f", Std[i].Per);

        fflush(stdin);
        printf("\n=================********==========\n");
        getch();

    }


    system("cls");
    printf("\n Enter Any To See All Students Details \n");
    getch();

    for(i = 1; i<=3; i++)
    {
        printf("\n Roll Number      = %d",Std[i].RNo);
        printf("\n Name             = %s",Std[i].Name);
        printf("\n Mobile Number    = %lld",Std[i].MobNo);
        printf("\n Physics Marks    = %d",Std[i].Phy);
        printf("\n Chemisty Marks   = %d",Std[i].Chem);
        printf("\n Maths Marks      = %d",Std[i].Maths);
        printf("\n Total Marks      = %d",Std[i].Tot);
        printf("\n Percentage       = %f",Std[i].Per);
        printf("\n=================********==========\n");

    }
    getch();
    return 0;

}






