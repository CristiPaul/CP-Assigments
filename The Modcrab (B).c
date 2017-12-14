#include <stdio.h>
#include <stdlib.h>

int a1, h1, c1, a2, h2, i, n, t, l, k;
int main()
{
    scanf ("%d",&h1);
    scanf ("%d",&a1);
    scanf ("%d",&c1);
    scanf ("%d",&h2);
    scanf ("%d",&a2);

    n = 0;
    t = h2 - a1;
    l = h1 - a2;
    while (t >= 0){
        n++;
        t = t - a1;
        l = l - a2;
        if (l <= a2)
            n++;
    }
    printf ("%d",n);

    for (i=0; i<n+1; i++){
             if (h1 <= a2){
                printf ("\nHEAL");
                h1 = h1 + c1;
             }
                else if ((h2 - a1) >= 0){
                    printf ("\nSTRIKE");
                    h2 = h2 - a1;
                    h1 = h1 - a2;
                }
            }

    return 0;
}
