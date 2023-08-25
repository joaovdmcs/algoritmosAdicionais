#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main(){
	
	int n, qNeg = 0;
	
	cout << "Qual a ordem da matriz? ";
	cin >> n;
	
	int m[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << "Elemento " << "[" << i << "," << j << "]: ";
			cin >> m[i][j];
			if(m[i][j] < 0) qNeg++;
		}
	}
	
	cout << "DIAGONAL PRINCIPAL:" << endl;
	
	for(int k = 0; k < n; k++) cout << m[k][k] << " ";
	cout << endl;
	
	cout << "QUANTIDADE DE NEGATIVOS = " << qNeg << endl;
	
	
	return 0;
}