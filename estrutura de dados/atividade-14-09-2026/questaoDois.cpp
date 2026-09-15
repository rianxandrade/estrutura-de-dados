#include <iostream>
using namespace std;

int tamanho = 15;

int matriculas[15] = {
    1001, 1007, 1015, 1023, 1031,
    1048, 1056, 1064, 1072, 1089,
    1097, 1105, 1113, 1121, 1138
};

void BuscaBinaria(int matriculas[], int tamanho, int valorBuscado) {
    int inicio = 0;
    int fim = tamanho - 1;
    int comparacao = 0;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        comparacao++;

        if (matriculas[meio] == valorBuscado) {
            cout << "Valor encontrado!" << endl;
            cout << "Matricula: " << matriculas[meio] << endl;
            cout << "Comparacoes realizadas: " << comparacao << endl;
            return;
        }
        else if (matriculas[meio] > valorBuscado) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }

    cout << "Matricula nao encontrada." << endl;
    cout << "Comparacoes realizadas: " << comparacao << endl;
}

int main() {
    BuscaBinaria(matriculas, tamanho, 1945);

    return 0;
}
