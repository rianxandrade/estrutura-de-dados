#include <iostream>
using namespace std;

int assentos[10][10] = {0};
int vendidos = 0;

void listarAssentos() {
    int assento = 1;

    cout << "\nAssentos do cinema:" << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (assentos[i][j] == 0) {
                cout << assento << " ";
            } else {
                cout << "X ";
            }

            assento++;
        }

        cout << endl;
    }
}

bool buscarAssento(int numero) {
    int linha = (numero - 1) / 10;
    int coluna = (numero - 1) % 10;

    if (assentos[linha][coluna] == 1) {
        return true;
    }

    return false;
}

void comprarIngresso() {
    int numero;

    cout << "\nInforme o numero do assento: ";
    cin >> numero;

    if (numero < 1 || numero > 100) {
        cout << "Assento invalido." << endl;
        return;
    }

    if (buscarAssento(numero)) {
        cout << "Esse assento ja foi comprado." << endl;
    } else {

        int linha = (numero - 1) / 10;
        int coluna = (numero - 1) % 10;

        assentos[linha][coluna] = 1;
        vendidos++;

        cout << "Assento comprado." << endl;
    }

    listarAssentos();
}

void mostrarComprados() {
    cout << "\nAssentos comprados:" << endl;

    int achou = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (assentos[i][j] == 1) {

                int numero = i * 10 + j + 1;

                cout << numero << " ";
                achou = 1;
            }
        }
    }

    if (achou == 0) {
        cout << "Nenhum assento comprado.";
    }

    cout << endl;
}

void relatorioDeVendas() {
    double lucro;

    lucro = vendidos * 15.50;

    cout << "\nRelatorio de vendas" << endl;
    cout << "Ingressos vendidos: " << vendidos << endl;
    cout << "Lucro: R$ " << lucro << endl;
}

void menu() {
    int opcao;

    do {
        cout << "\nBem-vindo ao Cineland" << endl;
        cout << "1 - Listar assentos" << endl;
        cout << "2 - Comprar ingresso" << endl;
        cout << "3 - Ver assentos comprados" << endl;
        cout << "4 - Relatorio de vendas" << endl;
        cout << "5 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {

            case 1:
                listarAssentos();
                break;

            case 2:
                comprarIngresso();
                break;

            case 3:
                mostrarComprados();
                break;

            case 4:
                relatorioDeVendas();
                break;

            case 5:
                cout << "Saindo..." << endl;
                relatorioDeVendas();
                break;

            default:
                cout << "Opcao invalida." << endl;
        }

    } while (opcao != 5);
}

int main() {
    listarAssentos();
    menu();

    return 0;
}
