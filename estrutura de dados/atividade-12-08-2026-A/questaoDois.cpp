#include <iostream>
using namespace std;

int main() {
	int numeros[5] = {1,2,3,4,5};
	int soma = 0;
	int subtracao = 0;
	int multiplicacao = 0 ;
	
	for(int i = 0; i < 5; i++) {
		soma += numeros[i];
		subtracao -= numeros[i];
		multiplicacao += numeros[i] * numeros[i+1];
	}
	 
	cout << "Soma dos elementos: " << soma << endl;
	cout << "Subtracao dos elementos: " << subtracao << endl;	
	cout << "Multiplicacao dos elementos: " << multiplicacao << endl;	
}