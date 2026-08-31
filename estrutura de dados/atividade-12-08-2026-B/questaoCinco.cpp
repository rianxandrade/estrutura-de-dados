#include <iostream>
using namespace std;

int main() {
    int somaLinha = 0;
    int numbers[3][3] = {
        {9, 15, 19},
        {21, 17, 29},
        {37, 41, 59}
    };
    
    for(int i = 0; i < 3; i++) {
        somaLinha = 0;
        for(int j = 0; j < 3;j++) {
            somaLinha += numbers[i][j];
            
        }
        cout << "Soma da linha: " << i+1 << ": " << somaLinha << endl;
    }
    
    return 0;
}