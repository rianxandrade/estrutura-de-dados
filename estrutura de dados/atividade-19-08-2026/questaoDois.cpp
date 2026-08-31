#include <iostream>
using namespace std;

void compararVetores(int numeros1[], int numeros2[], int tamanho) {
    int iguais[15];
    int cursor = 0;
    
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho; j++) {

            if(numeros1[i] == numeros2[j]) {

                bool jaExiste = false;

                for(int k = 0; k < cursor; k++) {
                    if(iguais[k] == numeros1[i]) {
                        jaExiste = true;
                        break;
                    }
                }

                if(!jaExiste) {
                    iguais[cursor] = numeros1[i];
                    cursor++;
                }

                break;
            }
        } 
    }
    
    for(int i = 0; i < cursor; i++) {
        cout << iguais[i] << endl;
    }
}

int main() {
    int numeros1[15] = {7, 2, 10, 4, 1, 9, 5, 3, 8, 6, 12, 5, 9, 2, 14};
    int numeros2[15] = {15, 2, 20, 9, 11, 5, 17, 9, 13, 16, 2, 18, 5, 21, 9};
    int tamanho = 15;
    
    compararVetores(numeros1, numeros2, tamanho);
    
    return 0;
}