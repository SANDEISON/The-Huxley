/*
    Autor : Sandeison Silva Fernandes
    Data: 10 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int x=1, maior=0;

    while (x!=0) {
        cin>>x;
        if (x >= maior){
            maior = x;
        }
    }

    cout << maior << endl;
    return 0 ;
}
