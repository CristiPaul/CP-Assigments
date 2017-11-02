#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf ("%d",&n);
    printf("Hello world!\n");

    while ((n>=0) && (n<=90))
    {
        scanf ("%d",&n);
         if ((n <=0 ) && (n>=90))
    {
        printf("Error !!\n");
    }
    }


    return 0;
}
