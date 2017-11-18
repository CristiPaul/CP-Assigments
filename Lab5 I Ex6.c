#include <stdio.h>
#include <stdlib.h>

int a[10][10],b[10][10],c[10][10],i,j,k,n;

int main()
{
    printf ("n=");
    scanf ("%d",&n);

    for (i=0;i<n;i++)
        for (j=0;j<n;j++){
            printf ("a[%d][%d]=",i,j);
            scanf ("%d",&a[i][j]);
        }

     for (i=0;i<n;i++)
        for (j=0;j<n;j++){
            printf ("b[%d][%d]=",&i,&j);
            scanf ("%d",&b[i][j]);
        }

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            c[i][j]=0;
            for (k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
            printf ("%d ",c[i][j]);
        printf ("\n");
    }

    return 0;
}
