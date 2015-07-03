#include <iostream>
#include <vector>

using namespace std;

int main ( )
{

   int n = 0;
   cin >> n;

   int vetor1[2*n][n], vetor2[2*n][n], total[n][n];


   for (int i =0; i< n ; i++){
       for (int j = 0 ; j < n; j++ ){
            cin >> vetor1[i][j];
       }
   }
   for (int i =0; i< n ; i++){
       for (int j = 0 ; j < n; j++ ){
            cin >> vetor2[i][j];
       }
   }

   for (int i =0; i< n ; i++){
       for (int j = 0 ; j < n; j++ ){
            total [i][j] = vetor1[i][j] + vetor2[i][j];
            cout << total[i][j] << " ";
       }
       cout << endl;
   }


  return 0 ;
}