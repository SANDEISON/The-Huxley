/*
    Autor : Sandeison Silva Fernandes
    Data: 02 / 06 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    float num_1, num_2,num_3;

    cin >> num_1 >> num_2 >> num_3;
    
    if ((num_1 == num_2)&&(num_1==num_3)){
        cout <<"equilatero"<< endl;
    }else{
        if (( num_1 == num_2 )||( num_1==num_3 )||( num_2==num_3 )){
            cout <<"isosceles"<< endl;
        }else{
            cout <<"escaleno"<< endl;
        }


    }

    return 0 ;
}
