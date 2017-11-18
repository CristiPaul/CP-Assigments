#include <stdio.h>
#include <stdlib.h>

char arr[80];
int n,i,k;

int main()
{
    printf ("array:");
    gets (arr);

    k=1;

    for (i=0;i<strlen(arr);i++){
        if (arr[i]==' ')
            k++;
    }

    printf ("The number of words is =%d",k);

    return 0;
}
