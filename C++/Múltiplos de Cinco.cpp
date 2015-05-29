/*
    Autor : Sandeison Silva Fernandes
    Data: 28 / 05 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    int n, m, cont = 0;
    cin >> n >> m;


    for(int i=n; i <= m; i++){
        if (i%5==0){
            if (cont == 0){
              cout << i;
              cont++;
            }else{
                cout << "|"<< i;
            }

        }
   }

   cout << endl;
    return 0 ;
}
