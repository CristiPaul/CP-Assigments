#include <stdio.h>
#include <stdlib.h>

int x[10],min2,max2,n,i;

int FindMinMax(int a[10],int min,int max)
{
    int i;

    max=0;
    min=90000;

    for (i=0;i<n;i++)
    {
        if (a[i] >= max)
            max = a[i];
        if (a[i] <= min)
            min = a[i];
    }

    return min, max;
}

int main ()
{
    printf ("n=");
    scanf ("%d",&n);

    printf ("The array");
    for (i=0;i<n;i++)
    {
        scanf ("%d",&x[i]);
    }

    printf ("min=%d\nmax=%d\n",FindMinMax(x,min2,max2),FindMinMax(x,min2,max2));


    return 0;
}
