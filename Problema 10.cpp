#include <iostream>
#include <math.h>
using namespace std;
int ageCustomers,i,length;
int main()
{
    cout << "The age of customers:";
    cin >> ageCustomers;

    cout << "The length of the movie:";
    cin >> length;


    if ((ageCustomers <= 17)&&(length <=90))
        cout << "Discount Applies";
      else
        cout << "No Discount ";



    return 0;
}
