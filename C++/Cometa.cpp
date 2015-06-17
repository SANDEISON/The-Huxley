/*
    Autor : Sandeison Silva Fernandes
    Data: 04 / 06 / 2015

*/

#include <iostream>

using namespace std;

int main ( )
{
    int ano_atual,  total;
    cin >> ano_atual;

    total = ((ano_atual + 1) - 1986 + 76 - 1)/76;;
    total = 1986 + 76*total;
    cout << total << endl;

    return 0 ;
}
