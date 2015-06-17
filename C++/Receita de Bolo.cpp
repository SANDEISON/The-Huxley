/*
    Autor : Sandeison Silva Fernandes
    Data: 07 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int a, b, c, TotalA, TotalB, TotalC, aux;

    cin >> a >> b >> c;

    TotalA = a / 2;
    TotalB = b / 3;
    TotalC = c / 5;

    if(TotalA > TotalB){
           aux = TotalA;
           TotalA = TotalB;
           TotalB = aux;
           }
     if(TotalB > TotalC){
           aux = TotalB;
           TotalB = TotalC;
           TotalC = aux;
           }
     if(TotalA > TotalB){
           aux = TotalA;
           TotalA = TotalB;
           TotalB = aux;
     }

    cout << TotalA << endl ;

    return 0 ;
}
