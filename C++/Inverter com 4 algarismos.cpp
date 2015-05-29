/*
    Autor : Sandeison Silva Fernandes
    Data: 28 / 05 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    int num, vet = 0, digit;
    cin >> num;

    while (num != 0){
        digit = num % 10;
        vet = (vet *10) + digit;
        num/= 10;

    }

    cout << vet<< endl ;

    return 0 ;
}
