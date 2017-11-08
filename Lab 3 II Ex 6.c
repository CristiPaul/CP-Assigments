#include <stdio.h>
#include <stdlib.h>

int n,i,sum;
int main()
{
    printf ("n=");
    scanf ("%d",&n);

    for (i=0;i<n;i++)
        sum = i*i+sum;

    printf("%d",sum);

    return 0;
}
