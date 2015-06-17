/*
    Autor : Sandeison Silva Fernandes
    Data: 06 / 06 / 2015

*/


#include <iostream>

using namespace std;

int main ( )
{
    int cv, ce, cs, fv, fe, fs , totalc, totalf;

    cin >> cv >> ce >> cs >> fv >>  fe >>  fs;

    totalc = (cv*3) + ce ;
    totalf = (fv*3) + fe ;

    if (totalc > totalf ){
        cout << "C" << endl;
    }else{
        if (totalf > totalc ){
            cout << "F" << endl;
        }else {
            if (totalc == totalf ){

                if (cs > fs){
                    cout << "C" << endl;
                }else{
                    if (fs > cs){
                        cout << "F" << endl;
                    }else{
                        cout << "=" << endl;
                    }
                }
            }
        }
    }





    return 0 ;
}
