/*
    Autor : Sandeison Silva Fernandes
    Data: 09 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int n , a, l , p ;

    cin >> n;
    cin >> a >> l >> p;

    if ( n <= a && n <=l && n <=p  ){
        cout << "S"<< endl;
    }else{
        cout << "N" << endl;
    }


    return 0 ;
}
