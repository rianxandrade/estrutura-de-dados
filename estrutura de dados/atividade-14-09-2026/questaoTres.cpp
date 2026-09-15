#include <iostream>
using namespace std;
int precos[10];
int tamanho = 10;

void exibirPrecos(int precos[]) {
	for(int i = 0; i < tamanho;i++) {
		cout << precos[i] << "-";
	}
}

void cadastrarPrecos() {
	for(int i = 0; i < tamanho; i++) {
		cout << "Informe um preco: ";
		cin >> precos[i];
	}
}

void bubbleSort(int precos[], int tamanho) {
    int quantidadeTrocas = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {

            if (precos[j] > precos[j + 1]) {
                int temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;

                quantidadeTrocas++;
            }
        }
    }

    cout << "Quantidade de trocas: " << quantidadeTrocas << endl;
}

int main() {
	cadastrarPrecos();
	cout << "Precos na ordem de cadastro" << endl;
	exibirPrecos(precos);
	
	cout << endl;
	
	cout << "Precos ordenados" << endl;
	bubbleSort(precos, tamanho);
	exibirPrecos(precos);

    return 0;
}
