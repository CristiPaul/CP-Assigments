#include <stdio.h>
#include <stdlib.h>

int * i;
int * n;
int a[50],b[50],c[50];

int main()
{
    printf ("n=");
    scanf ("%d",&n);

    printf ("The numbers in a:");
        for (i=1;i<=10;i++)
        {
        scanf ("%d",&a[i]);
        }


    printf ("The numbers in b:");
        for (i=1;i<=10;i++)
        {
        scanf ("%d",&b[i]);
        }


    for (i=1;i<=20;i++)
    {    if (a[i] > b[1])
                {
                c[i]=b[i];
                c[i]++;
                }
         else
            if (a[i] < b[i])
                    {
                    c[i]=a[i];
                    c[i]++;
                    }
            else
                {
                    c[i]=a[i];
                    c[i]++;
                }
    }


    printf ("%d",c);

    return 0;
}
