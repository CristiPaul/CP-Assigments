#include <stdio.h>
#include <stdlib.h>

int x,y;
int swap (int *a, int *b)
{
    int aux;

    aux = *b;
    *b = *a;
    *a = aux;
}

int main  ()
{
    printf ("x=");
    scanf ("%d",&x);
    printf ("y=");
    scanf ("%d",&y);

    swap (&x,&y);

    printf("After swapping\nx = %d\ny = %d\n",x,y);

    return 0;
}

