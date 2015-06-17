/*
    Autor : Sandeison Silva Fernandes
    Data: 01 / 06 / 2015

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main ( )
{
    float gastos = 0, total = 0, porcentagem = 0;


    cin >> gastos;
    porcentagem = (gastos*10)/100;
    total = porcentagem + gastos;
    printf("%.2f\n",total);




    return 0 ;
}
