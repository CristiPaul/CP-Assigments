#include <iostream>
#include <math.h>
using namespace std;
int A[100] , n , max1 ,min1 ,i;
int main()
{
    cout << "n=" ;
    cin >> n;

    for (i=1;i<=n;i++)
    {
        cout << "A[" << i << "]=";
        cin >> A[i];
    }

    max1 = 0;
    min1 = 8999;

    for (i=1;i<=n;i++)
    {
        if (A[i] < min1)
            min1 = A[i];
        if (A[i] > max1)
            max1 = A[i];
    }

    cout << endl ;
    cout << "Min =" << min1 << endl;
    cout << "Max =" << max1 << endl;

    return 0;
}
