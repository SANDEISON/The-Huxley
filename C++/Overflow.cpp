/*
    Autor : Sandeison Silva Fernandes
    Data: 09 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int n , q , p, total ;
    char c;

    cin >> n;
    cin >> p >> c >> q;

    if (c == '+'){
        total = p+q;

    }else{
        total=p*q;
    }

    if ( total > n  ){
        cout << "OVERFLOW"<< endl;
    }else{
        cout << "OK" << endl;
    }


    return 0 ;
}
