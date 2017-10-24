#include <iostream>
#include <math.h>
using namespace std;
int HHB,MMB,SSB,HHE,MME,SSE,HHL,MML,SSL;
int XL , XB ,XE ;
int main()
{
    cout << "The hour he starts :";
    cin >> HHB;
    cin >> MMB;
    cin >> SSB;

    cout << "The hour he finishes :";
    cin >> HHE;
    cin >> MME;
    cin >> SSE;

    XB = HHB * 360 + MMB * 60 + SSB;
    XE = HHE * 360 + MME * 60 + SSE;
    XL = HHE - HHB;

    HHL =  XL / 360 ;
    MML = (XL % 360 ) / 60;
    SSL = (XL % 360 ) % 60;

    cout << HHL  << " " << MML << " " << SSL ;

    return 0;
}
