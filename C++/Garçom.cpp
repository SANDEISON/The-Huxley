/*
   Autor : Sandeison Silva Fernandes
   Data: 01 / 07 / 2015

*/


#include <iostream>
#include <vector>

using namespace std;

int main ( )
{

   int n = 0, total=0;
   cin >> n;

   int vetor[n][2];


   for (int i =0; i< n ; i++){
       cin >> vetor[i][0] >> vetor[i][1];
       if (vetor[i][0]> vetor[i][1]){
           total += vetor[i][1];
       }
   }

   cout << total << endl;

  return 0 ;
}
