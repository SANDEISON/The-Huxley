/*
    Autor : Sandeison Silva Fernandes
    Data: 01 / 06 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    int n = 0, a = 0, b = 0, c = 0;

    cin >> n;

    while (n>=60) {
        if (n >=3600){
            a += 1;
            n -= 3600;
        }else{
            if (n >=60){
                b += 1;
                n -= 60;
            }
        }
    }

    c = n; // Os seundos é o restante.

    cout << a << " h " << b << " m " << c << " s" << endl;
    return 0 ;
}
