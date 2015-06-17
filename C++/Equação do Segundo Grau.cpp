/*
    Autor : Sandeison Silva Fernandes
    Data: 02 / 06 / 2015

*/

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main ( )
{
    float a, b, c, delta;

    cin >> a >> b >> c;

    delta = pow(b, 2) - 4 * a * c;

    if(a!=0){

        if(delta<-0.000001)
            cout << "NRR" << endl;
        else{

            delta = fabs(delta);
            printf( "%.2f\n", (- b + sqrt(delta))/(2 * a));
            printf( "%.2f\n", (- b - sqrt(delta))/(2 * a));

        }

    }else
        cout << "NEESG"<< endl;

    return 0 ;
}
