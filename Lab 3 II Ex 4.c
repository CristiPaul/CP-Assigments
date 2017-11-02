#include <stdio.h>
#include <stdlib.h>

int n , i,t,j;
int a[30];

int main()
{
    printf ("n=");
    scanf ("%d",&n);

    printf ("The numbers :");
    for (i=1;i<=n;i++)
    {
        scanf ("%d",&a[i]);
    }

   a[i]=a[1];
   a[j]=a[n];


    while ((i < n/2)&&(j > n/2 ))
    {
           if (a[i] > a[j] )
           {
                t=a[i];
                a[i]=a[j];
                a[j]=a[i];
                i++;
           }
           else
           {
               j--;
           }


    }

    printf ("%d",a);


    return 0;
}
