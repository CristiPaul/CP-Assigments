#include <stdio.h>
#include <stdlib.h>

int n, i, a[10];
int min, max;

void minmax (int a[], int *min, int *max){

    *min = *max = a[0];
    for (i=0; i<n; i++)
    {
        if (a[i] <= *min)
            *min = a[i];
        if (a[i] >= *max)
            *max = a[i];
    }
}


int main()
{
    printf ("n= ");
    scanf ("%d", &n);
    printf ("The array is : ");
    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    minmax (a, &min, &max);

    printf ("%d \n%d", min, max);

    return 0;
}
