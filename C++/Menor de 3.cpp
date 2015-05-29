/*
    Autor : Sandeison Silva Fernandes
    Data: 28 / 05 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    int x = 0, y = 0, z = 0, menor = 0;

    cin >> x;
    cin >> y;
    cin >> z;
    menor=x;

    if (y < menor) {
        menor = y;
    }
    if (z < menor) {
        menor = z;
    }


    cout << menor << endl;
    return 0 ;
}
