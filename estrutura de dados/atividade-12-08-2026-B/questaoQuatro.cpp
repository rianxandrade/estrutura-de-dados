#include <iostream>
using namespace std;

int main() {
    int maiorNumero = 0;
    int linha = 0;
    int coluna = 0;
    
    int numbers[3][4] = {
        {9, 15, 12, 19},
        {21, 17, 26, 29},
        {37, 41, 45, 59}
    };
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(numbers[i][j] > maiorNumero) {
                maiorNumero = numbers[i][j];
                linha = i+1;
                coluna = j+1;
            }
        }
    }
    cout << "Maior numero: " << maiorNumero << endl;
    cout << "Linha " << linha << " coluna " << coluna << endl;
    
    return 0;
}