#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;


int main(){
	
	int n;
	
	cout << "Quantas pessoas serao digitadas? ";
	cin >> n;
	
	int idades[n];
	double alturas[n], somaAlturas = 0, countIdades = 0;
	string nomes[n];
	
	
	for(int i=0;i<n;i++){
		cin.ignore(INT_MAX, '\n');
		
		cout << "Dados da " << i+1 << "a pessoa:" << endl;
		cout << "Nome: ";
		getline(cin, nomes[i]);
		cout << "Idade: ";
		cin >> idades[n];
		cout << "Altura: ";
		cin >> alturas[n];
		
		somaAlturas += alturas[n];
	}
	
	
	cout << fixed << setprecision(2);
	cout << "Altura media: " << (somaAlturas/n) << endl;
	
	for(int j=0; j<n; j++){
		if(idades[j] < 16){countIdades++;}
	}
	
	
	int p = countIdades*100.0/n;
	cout << fixed << setprecision(1);
	cout << "Pessoas com menos de 16 anos: " << p << "%" << endl;
	
	for(int k=0; k<n; k++){
		if(idades[k] < 16){cout << nomes[k] << endl;}
	}
	
	
	return 0;
}
