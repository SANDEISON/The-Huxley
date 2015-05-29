/*
    Autor : Sandeison Silva Fernandes
    Data: 28 / 05 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    int n, m;
    cin >> n;
    cin >> m;

    for(int i=n; i <= m; i++){
        if (i%2!=0){
             cout << i<< endl;
        }

    }
    return 0 ;
}
