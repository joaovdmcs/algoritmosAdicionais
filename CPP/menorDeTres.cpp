#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	
	long long int valores[3];
	long long int menor;
	
	cout << "Primeiro valor: ";
	cin >> valores[0];
	
	cout << "Segundo valor: ";
	cin >> valores[1];

	cout << "Terceiro valor: ";
	cin >> valores[2];

	
	menor = valores[0];
	
	for(int i = 1; i < sizeof(valores)/sizeof(long long int); i++){ //detalhe para len, sizeof() apenas retorna o tamanho em bytes.
		if(valores[i] < menor) menor = valores[i];
	}
	
	cout << "MENOR = " << menor << endl;
	
	
	return 0;
}