#include <stdio.h>
#include <stdlib.h>

int n ,i ,f[100];

int fibo(int n , int f[100]){

    int i;

    for (i=1;i<=n;i++)
    {
        f[i] = f[i-1] + f[i-2];
        printf ("%f",f);
    }
}





int main()
{
    printf ("n=:",n);
    scanf ("%d",&n);

    printf ("%f",fibo);
    return 0;
}
