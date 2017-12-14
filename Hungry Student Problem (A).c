#include <stdio.h>
#include <stdlib.h>

int n, x[5], i;

int main()
{
    scanf ("%d",&n);

    for ( i=0; i<n; i++ ){
        scanf ("%d",&x[i]);
        if ((x[i]%3 == 0)||(x[i]%7 == 0))
            printf ("YES\n");
        else
            printf ("NO\n");
    }

    return 0;
}
