#include <iostream>
using namespace std;
int main() {
   int n1, n2,n3, aux;
   cin >> n1 >> n2 >> n3;

   if (n1 > n2){
      aux = n2
      n2 = n1
      n1 = aux

    }


    if (n1 > n3 ){
     aux = n3
     n3 = n1
     n1 = aux

    }


    if (n2 > n3){

        aux = n3
        n3 = n2
        n2 = aux

    }

   cout << n1 << endl << n2 << endl << n3 << endl;
   return 0;
}
