#include <iostream>
#include <string>
using namespace std;

Jogador* inicio = NULL;
Jogador* atual = NULL;
int quantidade = 0;

struct Jogador {
    string nome;
    int identificacao;

    Jogador* proximo;
};

void cadastrarJogador() {

    Jogador* novo = new Jogador;

    cout << "\nNome do jogador: ";
    cin >> novo->nome;

    cout << "Numero de identificacao: ";
    cin >> novo->identificacao;

    novo->proximo = NULL;


    if (inicio == NULL) {

        inicio = novo;
        novo->proximo = inicio;
        atual = inicio;

    } else {

        Jogador* ultimo = inicio;

        while (ultimo->proximo != inicio) {
            ultimo = ultimo->proximo;
        }

        ultimo->proximo = novo;
        novo->proximo = inicio;
    }

    quantidade++;

    cout << "Jogador cadastrado com sucesso!" << endl;
}


void mostrarJogadores() {

    if (inicio == NULL) {
        cout << "Nenhum jogador cadastrado." << endl;
        return;
    }

    Jogador* jogador = inicio;

    cout << "\n===== JOGADORES =====" << endl;

    do {

        cout << "Nome: " << jogador->nome << endl;
        cout << "Identificacao: " << jogador->identificacao << endl;

        if (jogador == atual) {
            cout << ">> E a vez desse jogador <<" << endl;
        }

        cout << endl;

        jogador = jogador->proximo;

    } while (jogador != inicio);
}


void mostrarVez() {

    if (inicio == NULL) {
        cout << "Nao existem jogadores cadastrados." << endl;
        return;
    }

    cout << "\n===== VEZ DE JOGAR =====" << endl;
    cout << "Jogador: " << atual->nome << endl;
    cout << "Identificacao: " << atual->identificacao << endl;
}


void proximoJogador() {

    if (inicio == NULL) {
        cout << "Nao existem jogadores cadastrados." << endl;
        return;
    }

    atual = atual->proximo;

    cout << "\nAgora e a vez de: " << atual->nome << endl;
}


void removerJogador() {

    if (inicio == NULL) {
        cout << "Nao existem jogadores para remover." << endl;
        return;
    }

    int identificacao;

    cout << "\nInforme a identificacao do jogador: ";
    cin >> identificacao;

    Jogador* jogador = inicio;
    Jogador* anterior = NULL;


    do {

        if (jogador->identificacao == identificacao) {

            if (jogador == inicio) {

                if (jogador->proximo == inicio) {

                    delete jogador;

                    inicio = NULL;
                    atual = NULL;

                } else {

                    Jogador* ultimo = inicio;

                    while (ultimo->proximo != inicio) {
                        ultimo = ultimo->proximo;
                    }

                    inicio = jogador->proximo;
                    ultimo->proximo = inicio;

                    if (atual == jogador) {
                        atual = inicio;
                    }

                    delete jogador;
                }

            } else {

                anterior->proximo = jogador->proximo;

                if (atual == jogador) {
                    atual = jogador->proximo;
                }

                delete jogador;
            }

            quantidade--;

            cout << "Jogador removido com sucesso." << endl;

            return;
        }

        anterior = jogador;
        jogador = jogador->proximo;

    } while (jogador != inicio);


    cout << "Jogador nao encontrado." << endl;
}


void menu() {

    int opcao;

    do {

        cout << "\n===== PARTIDA =====" << endl;
        cout << "1 - Cadastrar jogador" << endl;
        cout << "2 - Exibir jogadores" << endl;
        cout << "3 - Ver de quem e a vez" << endl;
        cout << "4 - Proximo jogador" << endl;
        cout << "5 - Remover jogador" << endl;
        cout << "6 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {

            case 1:
                cadastrarJogador();
                break;

            case 2:
                mostrarJogadores();
                break;

            case 3:
                mostrarVez();
                break;

            case 4:
                proximoJogador();
                break;

            case 5:
                removerJogador();
                break;

            case 6:
                cout << "Saindo da partida..." << endl;
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