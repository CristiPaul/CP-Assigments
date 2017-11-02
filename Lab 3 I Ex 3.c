#include <stdio.h>
#include <stdlib.h>

char c[100],flag;

int main()
{
    printf ("The proposition is :");
    scanf ("%s",c);

    switch (c){

    case ' ':
             flag++;
             break;
        case '1234567890':
            digitflag++;
            break;
        case 'qwertyuiopasdfghjklzxcvbnm':
            charsflag++;
            break;


        default:
            printf("%c\n",c);
            break;



    }



    return 0;
}
