#include <iostream>
#include <math.h>
using namespace std;
int x,a,b,c,delta,x1,x2;
int main()
{
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    delta = b^2 - 4 * a * c;
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;

    cout << x1 << " " << x2 ;

    return 0;
}
