#include <iostream>
#include <math.h>
using namespace std;
int x,y,add,sub,multi,intdiv,realdiv,mod;

int main()
{
   cin >> x;
   cin >> y;
   add = x + y;
   cout << "addition =" << add << endl;
   sub = x - y;
   cout << "substraction =" << sub << endl;
   multi = x * y;
   cout << "multiplication =" << multi << endl;
   intdiv = x / y;
   cout << "integer division =" << intdiv << endl;
   mod = x % y;
   cout << "modulus =" << mod << endl;

    return 0;
}

