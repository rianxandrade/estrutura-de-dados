#include <iostream>
using namespace std;

int main() {
	int maior = 0;
	int numero = 0;
	
	for(int i = 0;i< 8;i++) {
		cout << "\nInforme um numero: ";
		cin >> numero;
		if(numero > maior) {
			maior = numero;
		}
	}
	
	cout << maior << endl;
	
	if(maior %2 == 0) {
		cout << "\nNumero par";
	} else {
		cout << "\nNumero impar";
	}
	
    return 0;
}
