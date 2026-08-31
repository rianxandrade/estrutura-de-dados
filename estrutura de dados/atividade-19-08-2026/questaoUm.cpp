#include <iostream>
using namespace std;

void buscaSequencial(int numeros[], int tamanho, int valorBuscado) {
    for(int i = 0; i < tamanho; i++) {
        if(numeros[i] == valorBuscado) {
            cout << "Valor encontrado no indice: " << i << endl;
            return;
        }
    }
    cout << "Valor nao encontrado" << endl;
}

int main() {
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = 10;
    
    buscaSequencial(numeros, tamanho, 1) ;
    
    return 0;
}