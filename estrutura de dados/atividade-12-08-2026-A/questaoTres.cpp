#include <iostream>
#include <string>
using namespace std;

int main() {
	string palavra;
	int contador = 0;
	
	cout << "Informe uma palavra com 10 caracteres :" << endl;
	cin >> palavra;	
	
	for(int i = 0; i < 10;i++) {
		if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' ) {
			contador++;
		}
	}	
	
	cout << "Quantidade de consoantes: " << contador << endl;
	
	return 0;
}