/*
    Autor : Sandeison Silva Fernandes
    Data: 07 / 06 / 2015

*/
#include <iostream>

using namespace std;

int main ( )
{
    int x, y;

    cin >> x >> y;

    if (((x <=432)&& (x>=0)) && ( (y <=468)&& (y >=0) ) ){
         cout << "dentro" << endl;
    }else{
         cout << "fora" << endl;
    }
    return 0 ;
}
