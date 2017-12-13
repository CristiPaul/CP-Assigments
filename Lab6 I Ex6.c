#include <stdio.h>
#include <stdlib.h>

void split_time (long int total_sec, int *hr, int *min, int *sec){

   *hr = *min = *sec = 0;
   *hr = total_sec / 360;
   *min = (total_sec % 360 ) / 60;
   *sec = (total_sec % 360 ) % 60;

}

long int total_sec;
int hr, min, sec;

int main()
{
    printf("total_sec");
    scanf ("%d",&total_sec);

    split_time(total_sec, &hr, &min ,&sec);
    printf ("\n%dhr %dmin %dsec", hr, min, sec);

    return 0;
}
