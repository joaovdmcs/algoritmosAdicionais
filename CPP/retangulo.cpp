#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double qu(double n) {
	return n*n;
}

int main(){

		double base, altura;
		
		cout << "Base do retangulo: " << endl;
		cin >> base;
		cout <<"Altura do retangulo: " << endl;
		cin >> altura;
		
		cout << "AREA = " << setprecision(4) << (base*altura) << endl;
		
		cout << "PERIMETRO = " << setprecision(4) << (2*altura+2*base) << endl;
	
		cout << "DIAGONAL = " << setprecision(4) << sqrt(qu(altura)+qu(base)) << endl;
		
		
		return 0;
	
	
}
