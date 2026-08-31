#include <iostream>
using namespace std;

void bubbleSort(int numeros[], int tamanho) {
	int aux = 0;
	
	for(int i = 0; i < tamanho; i++) {
		for(int j = 0; j < tamanho-1; j++) {
			
			if(numeros[j] > numeros[j+1]) {
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		} 
	}
	
	for(int i = 0; i < tamanho; i++) {
		cout << numeros[i] << endl;
	}
}

int main() {
	int numeros[5] = {9, 1, 5, 4, 8};
	int tamanho = 5;
	
	bubbleSort(numeros, tamanho);	
	
	return 0;
}