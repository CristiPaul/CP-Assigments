#include <stdio.h>
#include <stdlib.h>

int a1, h1, c1, a2, h2, i, n_of_steps, h2_copy, h1_copy, k;
int main()
{
    scanf ("%d",&h1);
    scanf ("%d",&a1);
    scanf ("%d",&c1);
    scanf ("%d",&h2);
    scanf ("%d",&a2);

    n_of_steps = 0;
    h2_copy = h2;
    h1_copy = h1;
    while (h2_copy > 0){
        h2_copy = h2_copy - a1;
        h1_copy = h1_copy - a2;
        if (h1_copy <= a2 && h2_copy > a1)
            n_of_steps++;
        n_of_steps++;
    }
    printf ("%d",n_of_steps);

    for (i=0; i<n_of_steps; i++){
             if (h2 >= 0){
                h2 = h2 - a1;
                if (h1 <= a2){
                    printf ("\nHEAL");
                    h1 = h1 + c1;
                }
                printf ("\nSTRIKE");
             }
             h1 = h1 - a2;
             if (h2 <= 0)
                break;
            }

    return 0;

}
