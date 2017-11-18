#include <stdio.h>
#include <stdlib.h>

int a[10][10],i,j,n,aux;

int main()
{
    printf ("n=");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++){
             printf ("a[%d][%d]=",i,j);
             scanf ("%d",&a[i][j]);
    }

    for (i=0;i<n-1;i++){
        if (a[i][i] > a[i+1][i+1])
            aux=a[i][i];
            a[i][i]=a[i+1][i+1];
            a[i+1][i+1]=aux;
    }

    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
             printf ("%d  ",a[i][j]);
        printf ("\n");
    }
    return 0;
}
