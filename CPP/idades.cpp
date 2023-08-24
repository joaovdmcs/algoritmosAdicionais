#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	string nome1, nome2;
	int idade1, idade2;
	
	cout << "Dados da primeira pessoa: " << endl;
	cout << "Nome: ";
	getline(cin, nome1);
	cout << "Idade: ";
	cin >> idade1;
	cin.ignore(INT_MAX, '\n'); // limpeza do buffer.
	
	cout << "Dados da segunda pessoa: " << endl;
	cout << "Nome: ";
	getline(cin, nome2);
	cout << "Idade: ";
	cin >> idade2;
	
	cout << "A idade media de " << nome1 << " e " << nome2 << " eh de ";
	cout << fixed << setprecision(1);
	cout << (double) (idade1+idade2)/2 << " anos." << endl;
	
	return 0;
	
}