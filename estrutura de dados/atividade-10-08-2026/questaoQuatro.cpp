#include <iostream>
using namespace std;

int main() {
	int numero = 0;
	cout << "Informe um numero para ver a tabuada: ";
	cin >> numero;
	
	for(int i = 0;i < 10;i++) {
		cout << numero << "x " << i+1 <<" = "<< numero * (i+1) <<endl;
	} 
	
    return 0;
}
