#include <iostream>
using namespace std;

void tabuada(int numero) {

    for (int i = 1; i <= 10; i++) {
        cout << numero << " + " << i << " = " << (numero + i) << endl;
    }
    
    cout << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << numero << " - " << i << " = " << (numero - i) << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
    
    cout << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " / " << i << " = " << (numero / i) << endl;
    }
}

int main() {
    int numero = 0;

    cout << "Informe um numero: ";
    cin >> numero;

    tabuada(numero);

    return 0;
}