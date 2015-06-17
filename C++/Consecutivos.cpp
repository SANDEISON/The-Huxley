/*
    Autor : Sandeison Silva Fernandes
    Data: 10 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int x=0, y =0, aux =0, cont=0, cont2=0;

    cin>>x;
    for (int i =0; i <x ; i ++){

        cin >> y;
        if (y!=aux){
            aux = y;

            if (cont >= cont2){
                cont2 = cont;
            }
            cont =0;
        }
       if (y == aux){
        cont++;
       }
    }
    if (cont>= cont2){
        cout << cont << endl;
    }else{
         cout << cont2 << endl;
    }
    return 0 ;
}
