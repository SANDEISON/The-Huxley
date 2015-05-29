/*
    Autor : Sandeison Silva Fernandes
    Data: 28 / 05 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    int x = 0, y = 0, z = 0;
    float media=0;


    cin >> x;
    cin >> y;
    cin >> z;
    media = (x+y+z)/ 3;

    if (media >= 7){
     cout << "aprovado" << endl;
    }else{
        if (media < 3){
           cout << "reprovado" << endl;
        }else{
             cout << "prova final" << endl;
        }

    }

    return 0 ;
}
