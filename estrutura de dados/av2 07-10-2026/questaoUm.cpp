#include <iostream>
#include <string>
using namespace std;

Animal* aquaticos = NULL;
Animal* terrestres = NULL;
Animal* voadores = NULL;

int quantidadeAquaticos = 0;
int quantidadeTerrestres = 0;
int quantidadeVoadores = 0;

struct Animal {
    string nome;
    string alimentacao;
    string pais;
    int idade;

    Animal* proximo;
};

void cadastrarAnimal() {
    int opcao;

    cout << "\nEscolha o habitat:" << endl;
    cout << "1 - Aquaticos" << endl;
    cout << "2 - Terrestres" << endl;
    cout << "3 - Voadores" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    Animal* novo = new Animal;

    cout << "\nNome do animal: ";
    cin >> novo->nome;

    cout << "Tipo de alimentacao: ";
    cin >> novo->alimentacao;

    cout << "Pais de origem: ";
    cin >> novo->pais;

    cout << "Idade: ";
    cin >> novo->idade;

    novo->proximo = NULL;


    if (opcao == 1) {

        if (quantidadeAquaticos >= 5) {
            cout << "O habitat aquatico ja esta cheio." << endl;
            delete novo;
            return;
        }

        if (aquaticos == NULL) {
            aquaticos = novo;
        } else {
            Animal* atual = aquaticos;

            while (atual->proximo != NULL) {
                atual = atual->proximo;
            }

            atual->proximo = novo;
        }

        quantidadeAquaticos++;

        cout << "Animal cadastrado com sucesso!" << endl;

    } else if (opcao == 2) {

        if (quantidadeTerrestres >= 5) {
            cout << "O habitat terrestre ja esta cheio." << endl;
            delete novo;
            return;
        }

        if (terrestres == NULL) {
            terrestres = novo;
        } else {
            Animal* atual = terrestres;

            while (atual->proximo != NULL) {
                atual = atual->proximo;
            }

            atual->proximo = novo;
        }

        quantidadeTerrestres++;

        cout << "Animal cadastrado no habitat terrestre." << endl;

    } else if (opcao == 3) {

        if (quantidadeVoadores >= 5) {
            cout << "O habitat dos voadores ja esta cheio." << endl;
            delete novo;
            return;
        }

        if (voadores == NULL) {
            voadores = novo;
        } else {
            Animal* atual = voadores;

            while (atual->proximo != NULL) {
                atual = atual->proximo;
            }

            atual->proximo = novo;
        }

        quantidadeVoadores++;

        cout << "Animal cadastrado no habitat dos voadores." << endl;

    } else {
        cout << "Opcao invalida." << endl;
        delete novo;
    }
}


void mostrarAnimais(Animal* lista) {

    if (lista == NULL) {
        cout << "Nenhum animal cadastrado." << endl;
        return;
    }

    Animal* atual = lista;

    while (atual != NULL) {

        cout << "\nNome: " << atual->nome << endl;
        cout << "Alimentacao: " << atual->alimentacao << endl;
        cout << "Pais de origem: " << atual->pais << endl;
        cout << "Idade: " << atual->idade << endl;

        atual = atual->proximo;
    }
}


void consultarAnimais() {

    cout << "\n===== ANIMAIS AQUATICOS =====" << endl;
    mostrarAnimais(aquaticos);

    cout << "\n===== ANIMAIS TERRESTRES =====" << endl;
    mostrarAnimais(terrestres);

    cout << "\n===== ANIMAIS VOADORES =====" << endl;
    mostrarAnimais(voadores);
}


void visualizarHabitat() {

    int opcao;

    cout << "\nEscolha o habitat:" << endl;
    cout << "1 - Aquaticos" << endl;
    cout << "2 - Terrestres" << endl;
    cout << "3 - Voadores" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    if (opcao == 1) {

        cout << "\n===== HABITAT AQUATICO =====" << endl;
        mostrarAnimais(aquaticos);

    } else if (opcao == 2) {

        cout << "\n===== HABITAT TERRESTRE =====" << endl;
        mostrarAnimais(terrestres);

    } else if (opcao == 3) {

        cout << "\n===== HABITAT DOS VOADORES =====" << endl;
        mostrarAnimais(voadores);

    } else {
        cout << "Opcao invalida." << endl;
    }
}


void buscarAnimal() {

    string nome;

    cout << "\nInforme o nome do animal: ";
    cin >> nome;

    Animal* atual = aquaticos;

    while (atual != NULL) {

        if (atual->nome == nome) {
            cout << "\nAnimal encontrado!" << endl;
            cout << "Habitat: Aquatico" << endl;
            cout << "Nome: " << atual->nome << endl;
            cout << "Alimentacao: " << atual->alimentacao << endl;
            cout << "Pais: " << atual->pais << endl;
            cout << "Idade: " << atual->idade << endl;
            return;
        }

        atual = atual->proximo;
    }


    atual = terrestres;

    while (atual != NULL) {

        if (atual->nome == nome) {
            cout << "\nAnimal encontrado!" << endl;
            cout << "Habitat: Terrestre" << endl;
            cout << "Nome: " << atual->nome << endl;
            cout << "Alimentacao: " << atual->alimentacao << endl;
            cout << "Pais: " << atual->pais << endl;
            cout << "Idade: " << atual->idade << endl;
            return;
        }

        atual = atual->proximo;
    }


    atual = voadores;

    while (atual != NULL) {

        if (atual->nome == nome) {
            cout << "\nAnimal encontrado!" << endl;
            cout << "Habitat: Voador" << endl;
            cout << "Nome: " << atual->nome << endl;
            cout << "Alimentacao: " << atual->alimentacao << endl;
            cout << "Pais: " << atual->pais << endl;
            cout << "Idade: " << atual->idade << endl;
            return;
        }

        atual = atual->proximo;
    }

    cout << "Animal nao encontrado." << endl;
}


void removerAnimal() {

    string nome;

    cout << "\nInforme o nome do animal que deseja remover: ";
    cin >> nome;

    Animal* atual = aquaticos;
    Animal* anterior = NULL;

    while (atual != NULL) {

        if (atual->nome == nome) {

            if (anterior == NULL) {
                aquaticos = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            delete atual;
            quantidadeAquaticos--;

            cout << "Animal removido do habitat aquatico." << endl;
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }


    atual = terrestres;
    anterior = NULL;

    while (atual != NULL) {

        if (atual->nome == nome) {

            if (anterior == NULL) {
                terrestres = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            delete atual;
            quantidadeTerrestres--;

            cout << "Animal removido do habitat terrestre." << endl;
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }


    atual = voadores;
    anterior = NULL;

    while (atual != NULL) {

        if (atual->nome == nome) {

            if (anterior == NULL) {
                voadores = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            delete atual;
            quantidadeVoadores--;

            cout << "Animal removido do habitat dos voadores." << endl;
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }

    cout << "Animal nao encontrado." << endl;
}


void menu() {

    int opcao;

    do {

        cout << "\n===== ZOOLOGICO =====" << endl;
        cout << "1 - Cadastrar animal" << endl;
        cout << "2 - Consultar animais" << endl;
        cout << "3 - Buscar animal" << endl;
        cout << "4 - Deletar animal" << endl;
        cout << "5 - Visualizar habitat" << endl;
        cout << "6 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {

            case 1:
                cadastrarAnimal();
                break;

            case 2:
                consultarAnimais();
                break;

            case 3:
                buscarAnimal();
                break;

            case 4:
                removerAnimal();
                break;

            case 5:
                visualizarHabitat();
                break;

            case 6:
                cout << "Saindo do zoologico..." << endl;
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