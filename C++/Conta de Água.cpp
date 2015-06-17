/*
    Autor : Sandeison Silva Fernandes
    Data: 13 / 06 / 2015

*/


#include <iostream>
#include<string>

using namespace std;

int main ( )
{
    int n =0, conta =7, verifica =0;
    cin >> n;


    if (n > 100) {
        verifica = n - 100;
        n -=verifica;
        conta += ( verifica * 5);
    }

    if (n > 30) {
        verifica = n - 30;
        n -= verifica;
        conta += verifica * 2;
    }

    if (n > 10) {
        verifica = n - 10;
        conta += verifica;
    }


    cout << conta << endl ;

    return 0 ;
}
