#include <iostream>
#include <math.h>
using namespace std;
int nStudenti ,i,procent,A[100],t;
int main()
{
    cout << "Numarul de studenti =" ;
    cin >> nStudenti;

    for (i=1;i<=nStudenti;i++){
           cout << "Notele studentilor :";
           cin >> A[i];

    }

    for (i=1;i<=nStudenti;i++){
            if (A[i] >= 5)
                cout << "A[" << i << "]:" << " " << "Passed" << endl ;
            if (A[i] < 5 )
                cout << "A[" << i << "]:" << " " << "Failed" << endl ;
            if (A[i] < 8)
                t++;

    }

    procent = (100/nStudenti) * t;

    cout << "Procentul =" << procent << "%";








    return 0;
}
