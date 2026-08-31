#include <iostream>
using namespace std;

void calcularMedia(double notaUm, double notaDois, double notaTres) {
	double media = (notaUm + notaDois + notaTres) / 3;
	cout << "Nota final: " << media << endl;
}

int main() {
	double notaUm = 0;
	double notaDois = 0;
	double notaTres = 0;
	double media = 0;
	
	cout << "Informe a primeira nota: ";
	cin >> notaUm;
	
	cout << "Informe a segunda nota: ";
	cin >> notaDois;
	
	cout << "Informe a terceira nota: ";
	cin >> notaTres;
	
	calcularMedia(notaUm, notaDois, notaTres);
	
	if(media > 7) {
		cout << "Status: Aprovado" << endl;
	} else if(media > 5) {
		cout << "Status:Em recuperacao" << endl;
	} else {
		cout << "Status: Reprovado" << endl;
	}
	
	return 0;
}