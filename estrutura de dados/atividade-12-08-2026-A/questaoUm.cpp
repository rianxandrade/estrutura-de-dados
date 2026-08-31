#include <iostream>
using namespace std;
int main() {
	int numeros[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	for(int i = 14; i >= 0;i--) {
		cout << numeros[i] << endl;
	}
	return 0;
}