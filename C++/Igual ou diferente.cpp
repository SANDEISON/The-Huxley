/*
    Autor : Sandeison Silva Fernandes
    Data: 02 / 06 / 2015

*/

#include <iostream>
using namespace std;

int main ( )
{
    int num_1, num_2,num_3;

    cin >> num_1 >> num_2 >> num_3;
    
    if ((num_1 == num_2)&&(num_1==num_3)){
        cout <<"1"<< endl;        
    }else{
        if (( num_1 != num_2 )&&( num_1!=num_3 )&&( num_2!=num_3 )){
            cout <<"2"<< endl;
        }else{
            cout <<"3"<< endl;
        }


    }

    return 0 ;
}
