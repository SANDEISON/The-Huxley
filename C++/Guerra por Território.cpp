/*
   Autor : Sandeison Silva Fernandes
   Data: 01 / 07 / 2015

*/


#include <iostream>
#include <vector>

using namespace std;

int main ( )
{

   int n = 1, total=0, verifica=0, achou = 0;

   cin >> n;
   int vetor[n];
   for(int i = 0; i < n; i++){
        cin >> vetor[i];
        total += vetor[i];
   }
   total /= 2;
   for(int i = 0; i < n; i++){
        verifica += vetor[i];
        if (verifica >= total){
            achou = i;
            break;
         }
    }
    cout << achou +1 << endl;

  return 0 ;
}
