#include <iostream>

using namespace std;

int main(){
	
	int a,b;
	
	cout << "Digite dois numeros:" << endl;
	cin >> a;
	cin >> b;
	
	do{
		if(a>b) cout << "DECRESCENTE!" << endl;
		else cout << "CRESCENTE!" << endl;
		
		cout << "Digite outros dois numeros: " << endl;
		cin >> a;
		cin >> b;
		
	}while(a!=b);
	
	return 0;
}
