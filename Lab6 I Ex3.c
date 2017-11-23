#include <stdio.h>
#include <stdlib.h>

char a[10] = "Laboratory";
char *b = "Exemple";

int strcat (char* a,const char* b)
{
    int i = 0;

    while (a[i] != '\0')
        i++;
    while (*b != '\0')
        a[i++] = *b++;

    a[i] = '\0';

    return (a);
}

int main()
{
    strcat(a,b);
    printf("%s",a);

    return 0;
}
