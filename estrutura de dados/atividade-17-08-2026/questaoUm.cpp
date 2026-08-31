#include <iostream>
using namespace std;

int somar(int a, int b) {
	return a + b;
}

int main() {
	int a;
	int b;
	
	cout << "Informe um numero: ";
	cin >> a;
	cout << "Informe outro numero: ";
	cin >> b;
	
	cout << "Resultado da soma: " << somar(a, b) << endl;
	
	return 0;
}