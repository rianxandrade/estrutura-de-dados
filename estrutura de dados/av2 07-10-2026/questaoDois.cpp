#include <iostream>
#include <string>
using namespace std;

struct Comprador {
    string nome;
    int idade;
    string cidade;
    string ingresso;

    Comprador* proximo;
    Comprador* anterior;
};

Comprador* inicio = NULL;
Comprador* fim = NULL;

int quantidade = 0;


void cadastrarComprador() {

    Comprador* novo = new Comprador;

    cout << "\nNome do comprador: ";
    cin >> novo->nome;

    cout << "Idade: ";
    cin >> novo->idade;

    cout << "Cidade: ";
    cin >> novo->cidade;

    cout << "Show do ingresso: ";
    cin >> novo->ingresso;

    novo->proximo = NULL;
    novo->anterior = NULL;


    if (inicio == NULL) {

        inicio = novo;
        fim = novo;

    } else {

        fim->proximo = novo;
        novo->anterior = fim;
        fim = novo;
    }

    quantidade++;

    cout << "Comprador cadastrado com sucesso!" << endl;
}


void mostrarCompradores() {

    if (inicio == NULL) {
        cout << "Nenhum comprador cadastrado." << endl;
        return;
    }

    Comprador* atual = inicio;

    while (atual != NULL) {

        cout << "\nNome: " << atual->nome << endl;
        cout << "Idade: " << atual->idade << endl;
        cout << "Cidade: " << atual->cidade << endl;
        cout << "Show: " << atual->ingresso << endl;

        atual = atual->proximo;
    }
}


void mostrarInverso() {

    if (fim == NULL) {
        cout << "Nenhum comprador cadastrado." << endl;
        return;
    }

    Comprador* atual = fim;

    while (atual != NULL) {

        cout << "\nNome: " << atual->nome << endl;
        cout << "Idade: " << atual->idade << endl;
        cout << "Cidade: " << atual->cidade << endl;
        cout << "Show: " << atual->ingresso << endl;

        atual = atual->anterior;
    }
}


void buscarComprador() {

    string nome;

    cout << "\nInforme o nome do comprador: ";
    cin >> nome;

    Comprador* atual = inicio;

    while (atual != NULL) {

        if (atual->nome == nome) {

            cout << "\nComprador encontrado!" << endl;
            cout << "Nome: " << atual->nome << endl;
            cout << "Idade: " << atual->idade << endl;
            cout << "Cidade: " << atual->cidade << endl;
            cout << "Show: " << atual->ingresso << endl;

            return;
        }

        atual = atual->proximo;
    }

    cout << "Comprador nao encontrado." << endl;
}


void removerComprador() {

    string nome;

    cout << "\nInforme o nome do comprador que deseja remover: ";
    cin >> nome;

    Comprador* atual = inicio;

    while (atual != NULL) {

        if (atual->nome == nome) {

            if (atual == inicio) {

                inicio = atual->proximo;

                if (inicio != NULL) {
                    inicio->anterior = NULL;
                }

            } else if (atual == fim) {

                fim = atual->anterior;
                fim->proximo = NULL;

            } else {

                atual->anterior->proximo = atual->proximo;
                atual->proximo->anterior = atual->anterior;
            }

            delete atual;
            quantidade--;

            cout << "Comprador removido com sucesso." << endl;

            return;
        }

        atual = atual->proximo;
    }

    cout << "Comprador nao encontrado." << endl;
}


void menu() {

    int opcao;

    do {

        cout << "\n===== SHOWS =====" << endl;
        cout << "1 - Cadastrar comprador" << endl;
        cout << "2 - Visualizar compradores" << endl;
        cout << "3 - Buscar comprador" << endl;
        cout << "4 - Excluir comprador" << endl;
        cout << "5 - Visualizar ordem inversa" << endl;
        cout << "6 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {

            case 1:
                cadastrarComprador();
                break;

            case 2:
                mostrarCompradores();
                break;

            case 3:
                buscarComprador();
                break;

            case 4:
                removerComprador();
                break;

            case 5:
                mostrarInverso();
                break;

            case 6:
                cout << "Saindo do sistema..." << endl;
                break;

            default:
                cout << "Opcao invalida." << endl;
        }

    } while (opcao != 6);
}


int main() {

    menu();

    return 0;
}
