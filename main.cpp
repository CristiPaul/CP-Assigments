#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
char S[100],S1[100];
int i;
int main()
{
    cin.get (S,100);
    strcpy (S1,S);

    for (i=0;i<=strlen(S1);i++)
        if(S1[i]>='A' && S1[i]<='Z')
            S1[i]=S[i]+32;

    cout << S1 << endl;

    for (i=0;i<=strlen(S);i++)
        if(S[i]>='a' && S[i]<='z')
            S[i]=S[i]-32;

    cout << S;

    return 0;
}
