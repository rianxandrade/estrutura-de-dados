#include <iostream>
using namespace std;

int main() {
    double notaUm = 0;
    double notaDois = 0;
    double notaTres = 0;
    double media = 0;

    cout << "Informe a primeira nota nota: ";
    cin >> notaUm;

    cout << "Informe a sua segunda nota: ";
    cin >> notaDois;
    
    cout << "Informe a sua terceira nota: ";
    cin >> notaTres;
    
    media = (notaUm + notaDois +  notaTres) / 3;
    cout << "Sua media foi: " << media;
    
    if(media >= 7) {
    	cout << "\nParabens! Aprovado";
	} else if (media >= 5){
		cout << "\nVoce esta em recuperacao";
	} else {
		cout << "\nVoce foi reprovado";
	}

    return 0;
}
