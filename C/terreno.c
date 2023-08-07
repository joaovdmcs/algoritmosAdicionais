#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double largura, comprimento, valor;
	
	printf("Digite a largura do terreno: ");
	scanf("%lf", &largura);
	printf("Digite o comprimento do terreno: ");
	scanf("%lf", &comprimento);
	printf("Digite o valor do metro quadrado: ");
	scanf("%lf", &valor);
	
	printf("Area do terreno =  %.2lf\n", (largura*comprimento));
	printf("Preco do terreno = %.2lf\n", (largura*comprimento*valor));
	
	return 0;
}