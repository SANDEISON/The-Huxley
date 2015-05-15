#include <iostream>
using namespace std;
int main() {
   int num_1, num_2,num_3, aux;
   cin >> num_1 >> num_2 >> num_3;
   while (( num_1 >num_2 ) || ( num_2 > num_3 )) {
      if (num_1 > num_2) {
         aux = num_1;
         num_1 = num_2;
         num_2 = aux;
      }
      if (num_2 > num_3) {
         aux = num_2;
         num_2 = num_3;
         num_3 = aux;
      }
   }
   cout << num_1 << endl << num_2 << endl << num_3 << endl;
   return 0;
}
