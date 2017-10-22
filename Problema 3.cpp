#include <iostream>
#include <math.h>
using namespace std;
int n1,n2,compute1,compute2,ra,inv1,inv2;

int main()
{
    cin >> n1;
    cin >> n2;
    compute1=sqrt(n1);
    cout << "Compute square root of n1 =" << compute1 << endl;
    compute2=sqrt(n2);
    cout << "Compute square root of n2 =" << compute2 << endl;
    ra=pow(n1,n2);
    cout << "Raise n1 to the power of n2 =" << ra << endl;
    inv1=(n1)^-1;
    cout << "Inverse n1 =" << inv1 << endl;
    inv2=(n2)^-1;
    cout << "Inverse n2 =" << inv2 << endl;

    return 0;
}
