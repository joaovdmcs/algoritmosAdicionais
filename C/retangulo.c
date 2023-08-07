#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double quadrado(double n){
	return n*n;
}

int main(){
	double base, altura;
	printf("Base do retangulo: ");
	scanf("%lf", &base);
	printf("Altura do retangulo: ");
	scanf("%lf", &altura);
	
	printf("AREA = %.4lf\n", (altura*base));
	printf("PERIMETRO = %.4lf\n", (2*altura+2*base));
	printf("DIAGONAL = %.4lf\n", sqrt(quadrado(altura)+quadrado(base)));
	
	
	
	return 0;
}