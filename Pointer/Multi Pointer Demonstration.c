#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 27;
    int *r = &No;
    int **p = &r;
    int ***q = &p;
    int ****m = &q;
    int *****x= &m;


    printf("\n  Value Of No =%d ",No);
    printf("\n  Value Of &No =%d ",&No);
    printf("\n  Value Of &r =%d ",&r);
    printf("\n  Value Of &p =%d ",&p );
    printf("\n  Value Of &q =%d ",&q);
    printf("\n  Value Of &m =%d ",&m);
    printf("\n========================================\n");
    printf("\n  Value Of No =%d ",No);
    printf("\n  Value Of *r =%d ",*r);
    printf("\n  Value Of **p =%d ",**p );
    printf("\n  Value Of ***q =%d ",***q);
    printf("\n  Value Of ****m =%d ",****m);
    printf("\n  Value Of *****x =%d ",*****x);
    printf("\n========================================\n");
    printf("\n  Value Of No =%d ",No);
    printf("\n  Value Of *r =%d ",*r);
    printf("\n  Value Of **p =%d ",*p );
    printf("\n  Value Of ***q =%d ",**(&q));
    printf("\n  Value Of ****m =%d ",****m);
    printf("\n  Value Of *****x =%d ",&(***x));
    getch();
    return 0;
}
