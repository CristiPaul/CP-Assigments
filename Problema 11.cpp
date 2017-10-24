#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int    i;
char Enter[100];
int main()
{
    cout << "The name of Pittsburgh professional sports team :";
    cin.get (Enter,100);

    for (i=0;i<=strlen(Enter);i++)
        if (Enter[i] >='A' && Enter[i] <= 'Z')
            Enter[i] = Enter[i] + 32;

    if (Enter[i] == 'pirates' && Enter[i] == 'steelers' && Enter[i] == 'penguins'){
        if (Enter[i] == 'pirates')
            cout << "Home run!";
        if (Enter[i] == 'steelers')
            cout << "Touchdown!";
        if (Enter[i] == 'penguins')
            cout << "Goal!";
    }

    return 0;
}
