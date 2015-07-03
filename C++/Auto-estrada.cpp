/*
    Autor : Sandeison Silva Fernandes
    Data: 17 / 06 / 2015

*/


#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main ( )
{
    int c =0 , cont = 0;

    cin >> c;

    string entrada;

    cin >> entrada;

    for (int i =0; i < c; i++){
        if (entrada[i]== 'P'){
            cont += 2;
        }else{
            if (entrada[i]== 'C'){
                cont += 2;
            }else{
                if (entrada[i]== 'A'){
                    cont += 1;
                }
            }

        }

    }
    cout << cont << endl;


    return 0 ;
}
