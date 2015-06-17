/*
    Autor : Sandeison Silva Fernandes
    Data: 09 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int x, y , l1 , h1, l2, h2;

    cin >> x >> y;
    cin >> l1 >> h1;
    cin >> l2 >> h2;
    if (((l1+l2 <= x) && (h1<=y && h2<=y )) ||
        ((h1+h2 <= x) && (l1<=y && l2<=y )) ||
        ((l1+l2 <= y) && (h1<=x && h2<=x )) ||
        ((h1+h2 <= y) && (l1<=x && l2<=x )) ||
        ((l1+h2 <= x) && (h1<=y && l2<=y )) ||
        ((l1+h2 <= y) && (h1<=x && l2<=x )) ||
        ((l2+h1 <= x) && (l1<=y && h2<=y )) ||
        ((l2+h1 <= y) && (l1<=x && h2<=x ))
        ){
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }
    return 0 ;
}
