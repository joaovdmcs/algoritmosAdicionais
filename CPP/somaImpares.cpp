#include <iostream>

using namespace std;

void bubbleSort(int v[], int n){
	int aux;
	
	for (int i = 0; i<n; i++){
		for (int j = 0; j < n - 1 ; j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
	
}

int main(){
	
	int valores[2], soma;
	
	cout << "Digite dois numeros: " << endl;
	cin >> valores[0];
	cin >> valores[1];
	
	bubbleSort(valores,sizeof(valores)/sizeof(int));
	
	
	soma = 0;
	for(int i = valores[0]+1; i < valores[1]; i++){
		if(i%2!=0) soma += i;
	}
	
	cout << "SOMA DOS IMPARES = " << soma << endl;
	
	
	return 0;
}