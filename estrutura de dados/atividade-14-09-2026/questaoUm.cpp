#include <iostream>
using namespace std;
int codigos[10];
int tamanho = 10; 

void cadastrarProdutos() {
	for(int i = 0; i < 9;i++) {
		cout << "Informe um codigo: ";
		cin >> codigos[i];
	}
}

void exibirCodigos() {
	cout << "Codigos: ";
	for(int i = 0; i < 10; i++) {
		cout << codigos[i] << "-";
	}
}

void procurarCodigo(int codigos[]) {
    int comparacao = 0;
    int valorBuscado = 0;
    bool encontrado = false;

    cout << "Informe um codigo para consulta: ";
    cin >> valorBuscado;

    for (int i = 0; i < tamanho; i++) {
        comparacao++;

        if (codigos[i] == valorBuscado) {
            cout << "Valor encontrado" << endl;
            cout << "Posicao: " << i + 1 << endl;

            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "Codigo nao encontrado" << endl;
    }
}

int main() {
	cadastrarProdutos();
	procurarCodigo(codigos);
	return 0;
}