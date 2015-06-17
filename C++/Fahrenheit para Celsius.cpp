/*
    Autor : Sandeison Silva Fernandes
    Data: 01 / 06 / 2015

*/

#include <iostream> //  Incluindo Biblioteca C++
#include <stdio.h>

using namespace std;

int main ( )
{
    float Fahrenheit, Celsius;

    cin >> Fahrenheit;
    Celsius = (Fahrenheit-32)/1.800;
    printf ("%.2f\n",  Celsius) ;
    return 0 ;
}
