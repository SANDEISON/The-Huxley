#include <iostream>
#include<string>

using namespace std;

int main ( )
{
    int entrada = 0, c=0, d=14, cont =0, cont2 =0;



    for (int i =0; i < 5; i++){
        cin >> entrada;
        if (entrada >= c){
            c = entrada;
            cont++;
        }
        if (entrada <=d){
            d = entrada;
            cont2++;
        }
    }

    if (cont==5)
        cout << "C" << endl ;
    else{
        if (cont2==5){
            cout << "D" << endl ;
        }else{
            cout << "N" << endl ;
        }

    }
    return 0 ;
}