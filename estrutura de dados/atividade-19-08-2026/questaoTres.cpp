#include <iostream>
using namespace std;

void buscaSequencial(int numeros[], int tamanho, int valorBuscado) {
    int contador = 0;
    for(int i = 0; i < tamanho; i++) {
        if(numeros[i] == valorBuscado) {
            contador++;
        }
    }
    
    cout << "O numero " << valorBuscado << " repetiu " << contador << " vezes"; 
}

int main() {
    int numeros[10] = {9,5,8,2,5,3,6,5,4,10};
    int tamanho = 10;
    
    buscaSequencial(numeros, tamanho, 5);
    
    return 0;
}