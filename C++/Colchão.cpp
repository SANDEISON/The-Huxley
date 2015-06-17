 /*
    Autor : Sandeison Silva Fernandes
    Data: 07 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int a, b, c, h, l, aux;

    cin >> a >> b >> c;
    cin >> h >> l;

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

    if ( (( b <= h ) && (a <= l) )|| ( ( b<=l ) && (a <= h) ) )  {
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0 ;
}
