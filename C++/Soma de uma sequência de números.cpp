#include <iostream>
using namespace std;

int main(){

	int i, sum=0, n;
	cin >> (n);
	int number[n];
	for (i =0; i<n;i++){
		cin >> (number[i]);
		sum+=number[i];
	}
	cout << (sum);

return 0;
}
