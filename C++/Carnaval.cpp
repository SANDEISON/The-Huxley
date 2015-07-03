/*
    Autor : Sandeison Silva Fernandes
    Data: 27 / 06 / 2015

*/


#include <iostream>



using namespace std;



void insertionSortC(float array[], int tamanho) {
      int i, j;
      float tmp;

      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}


int main ( )
{
    float entrada[5], cont =0;

    for (int i =0; i< 5 ; i++){
        cin >> entrada[i];
    }

    insertionSortC(entrada,5);

    for (int i =1; i< 4 ; i++){

        cont += entrada[i];

    }

    cout << cont << endl;



    return 0 ;
}