/*
    Autor : Sandeison Silva Fernandes
    Data: 01 / 06 / 2015

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main ( )
{
   int idade;

   cin >> idade;

   if (idade < 16){
    cout << "nao eleitor"<< endl;
   }else{
       if ((idade < 18) || (idade > 65)){
           cout << "eleitor facultativo"<< endl;
       }else{
           cout << "eleitor obrigatorio"<< endl;
       }

   }

    return 0 ;
}
