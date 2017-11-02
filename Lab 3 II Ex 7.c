#include <stdio.h>
#include <stdlib.h>

int i , n ,j;

int main()
{
    scanf ("%d",&n);

    for (i=1;i<=n;i++){
        for (j=i;j<=n-1;j++){
            printf("%d",j);

        }
      printf ("\n");
      n--;
    }

    return 0;
}



