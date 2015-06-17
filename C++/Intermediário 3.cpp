/*
    Autor : Sandeison Silva Fernandes
    Data: 01 / 06 / 2015

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main ( )
{
    int num_1, num_2,num_3, aux;
           cin >> num_1 >> num_2 >> num_3;
           while (( num_1 >num_2 ) || ( num_2 > num_3 )) {
              if (num_1 > num_2) {
                 aux = num_1;
                 num_1 = num_2;
                 num_2 = aux;
              }
              if (num_2 > num_3) {
                 aux = num_2;
                 num_2 = num_3;
                 num_3 = aux;
              }
           }
           cout <<  num_2 << endl;

    return 0 ;
}
