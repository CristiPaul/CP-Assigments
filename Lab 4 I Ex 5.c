#include <stdio.h>
#include <stdlib.h>

int i,n;
int a[60];

int main()
{
    printf("n=");
    scanf ("%d",&n);

    for (i=0;i<=n;i++)
    {
        if (i%2==0)
            printf("%d ",i);
    }


    return 0;
}
