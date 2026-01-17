#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int RNo;
    char Name[40];
    long long int MobNo;
    float Per;
};
int main()
{
    struct Stud Std;

    printf("\n Details Of Studens = /n");

    printf("\n  Student Roll No  = %d",Std.RNo);
    printf("\n  Student Name     = %s",Std.Name);
    printf("\n  Mobile Number    = %lld",Std.MobNo);
    printf("\n  Percentage       = %f",Std.Per);

    getch ();
    return 0;
}


