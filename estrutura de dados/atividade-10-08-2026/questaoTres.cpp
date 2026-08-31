#include <iostream>
using namespace std;

int main() {
	int numero = 0;
	int soma = 0;
	int numeroPar = 0;
	int numeroImpar = 0;
	
	for(int i = 0;i < 10;i++) {
		cout << "\nInforme um numero: ";
		cin >> numero;
		soma+= numero;
		if(numero %2 == 0) {
			numeroPar++;
		} else {
			numeroImpar++;
		}
	}
	
	cout << "\nSoma dos numeros: " << soma; 
	cout << "\nQuantidade de pares: " << numeroPar;
	cout << "\nQuantidade dos impares: " << numeroImpar;  
	
    return 0;
}
