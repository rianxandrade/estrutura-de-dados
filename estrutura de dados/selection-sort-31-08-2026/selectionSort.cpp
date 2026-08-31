#include <iostream>
using namespace std;

void selectionSort(int numeros[], int n) {
	for(int i = 0; i < n-1; i++) {
		int indexMenor = i;
		
		for(int j = i + 1; j < n; j++) {
			if(numeros[j] < numeros[indexMenor]) {
				indexMenor = j;
			}
		}
		
		if(indexMenor != i) {
			int temp = numeros[i];
			numeros[i] = numeros[indexMenor];
			numeros[indexMenor] = temp;
		}
	}
}

int main() {
	int numeros[] = {6,5,3,2,1,4};
	int n = 6;
	
	selectionSort(numeros, n);
	
	for(int i = 0; i < 6; i++) {
		cout << numeros[i] << endl;
	}
	
	return 0;
}