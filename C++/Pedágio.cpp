/*
    Autor : Sandeison Silva Fernandes
    Data: 04 / 06 / 2015

*/

#include <iostream>

using namespace std;

int main ( )
{
    int l,  d, k, p, total_pedagio, total;
    cin >> l >> d;
    cin >> k >> p;


    total_pedagio = l/d ;

    total = (k*l)+(p*total_pedagio);

    cout << total << endl;

    return 0 ;
}
