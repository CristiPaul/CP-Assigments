#include <stdio.h>
#include <stdlib.h>

int a[10],n,i,r,t,k;

int main()
{
    printf ("n= ");
    scanf ("%d",&n);
    printf ("The array is:");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);

    k=0;
    for (i=0;i<n-2;i++)
    {
        t=a[i+1]-a[i];
        r=a[i+2]-a[i+1];
        if (t==r)
            k=1;
        else
            k=0;
    }

    if (k==1)
    {
        printf ("Terms are in arithmetic progression\n");
        printf ("The ratio is =%d",t);
    }
    else
        printf ("Terms are not in arithmetic progression\n");


    return 0;
}
