#include iostream
using namespace std;

void insertionSort(int numeros[], int n) {
    for(int i = 1; i  n; i++) {
        int aux = numeros[i];
        int j;

        for(j = i - 1; j = 0 && numeros[j]  aux; j--) {
            numeros[j + 1] = numeros[j];
        }

        numeros[j + 1] = aux;
    }
}

int main() {
    int numeros[5] = {5, 2, 4, 1, 3};
    int n = 5;

    insertionSort(numeros, n);

    for(int i = 0; i  n; i++) {
        cout  numeros[i]   ;
    }

    return 0;
}