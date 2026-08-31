#include <iostream>
using namespace std;

void verificarPar(int number) {
	if(number % 2 == 0) {
		cout << "O numero " << number << " e par" << endl;
	} else {
		cout << "O numero " << number << " e impar" << endl;
	}
} 

int main() {
	int number = 0;
	
	cout << "Informe um numero inteiro: ";
	cin >> number;
	
	verificarPar(number);
	
	return 0;
}