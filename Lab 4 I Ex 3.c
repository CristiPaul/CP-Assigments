#include <stdio.h>
#include <stdlib.h>

int Add_pro_ave(int a, int b, int c,int S,int P,int A)
{
    S = a + b + c;
    P = a * b * c;
    A = (a+b+c)/3;

    return A ;
}

int x,y,z,Sum,Produ,Average;

int main()
{
    printf ("x= ");
    scanf ("%d",&x);
    printf ("y= ");
    scanf ("%d",&y);
    printf ("z= ");
    scanf ("%d",&z);

    printf ("%d",Add_pro_ave(x,y,z,Sum,Produ,Average));
    return 0;
}
