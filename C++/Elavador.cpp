/*
    Autor : Sandeison Silva Fernandes
    Data: 10 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int n=0, c =0, s=0, e =0, total =0, cont =0;

    cin>>n >> c;
    for (int i =0; i < n ; i ++){

        cin >> s >> e;

        total += (e-s);

        if (total > c){
            cont++;
        }
    }
    if (cont>= 1 ){
        cout << "S" << endl;
    }else{
         cout << "N" << endl;
    }
    return 0 ;
}
