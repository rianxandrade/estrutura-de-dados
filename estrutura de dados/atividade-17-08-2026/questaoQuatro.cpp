#include <iostream>
using namespace std;

void maiorNumero(int numeros[], int tamanho) {
	int maiorNumero = 0;
	for(int i = 0; i < tamanho; i ++) {
		if(numeros[i] > maiorNumero) {
			maiorNumero = numeros[i];
		} 
	}
	cout << "Maior numero: " << maiorNumero;
}

int main() {
	int tamanho = 10;
	int numeros[10] = {11, 7, 2, 4, 12, 5, 17, 22, 14, 2};
	
	maiorNumero(numeros, tamanho);
	
	return 0;
	
}