/*
    Autor : Sandeison Silva Fernandes
    Data: 06 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int a, b, c , aux ;

    cin >> a >> b >> c;

    if(a > b){
           aux = a;
           a = b;
           b = aux;
           }
     if(b > c){
           aux = b;
           b = c;
           c = aux;
           }
     if(a > b){
           aux = a;
           a = b;
           b = aux;
     }

    cout << b << endl;

    return 0 ;
}
