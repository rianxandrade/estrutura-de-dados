#include <iostream>
using namespace std;

int main() {
    int anoAtual = 0;
    int anoNascimento = 0;
    int idade = 0;

    cout << "Informe o ano atual: ";
    cin >> anoAtual;

    cout << "Informe o seu ano de nascimento: ";
    cin >> anoNascimento;
    
    idade = anoAtual - anoNascimento;
    cout << "Sua idade e: " << idade;
    
    if(idade >= 18) {
    	cout << "\nVoce e maior de idade";
	} else {
		cout << "\nVoce e menor de idade";
	}

    return 0;
}
