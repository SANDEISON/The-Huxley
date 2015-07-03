/*
    Autor : Sandeison Silva Fernandes
    Data: 28 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{

    int n = 0, cont = 0;

    cin >> n;

    string gabarito, resposta ;

    cin >> gabarito;
    cin >> resposta;

    for (int i = 0; i < n; i++){

        if (gabarito[i] == resposta[i]){
            cont++;
        }

    }


   cout << cont << endl;
   return 0 ;
}
