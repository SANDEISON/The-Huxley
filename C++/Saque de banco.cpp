/*
    Autor : Sandeison Silva Fernandes
    Data: 01 / 06 / 2015

*/

#include <iostream> //  Incluindo Biblioteca C++

using namespace std;

int main ( )
{
    int saque, cinquenta =0 , vinte=0 , dez=0 , cinco = 0, um = 0;

    cin >> saque;
    while (saque >= 1) {
        if (saque >= 50 ){
            saque-= 50;
            cinquenta +=1;
        }else{
            if (saque >= 20 ){
                saque-= 20;
                vinte +=1;
            }else{
                if (saque >= 10 ){
                    saque-= 10;
                    dez +=1;
                }else{
                    if (saque >= 5 ){
                        saque-= 5;
                        cinco +=1;
                    }else{
                        saque-= 1;
                        um +=1;
                    }
                }
            }
        }
    }

    cout << "Notas de 50: " << cinquenta << endl;
    cout << "Notas de 20: " << vinte << endl;
    cout << "Notas de 10: " << dez << endl;
    cout << "Notas de 5: " << cinco << endl;
    cout << "Notas de 1: " << um << endl;

    return 0 ;
}
