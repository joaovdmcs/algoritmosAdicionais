#include <stdlib.h>
#include <stdio.h>


int main(){
	
	int n;
	double soma;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%i", &n);
	
	double vetor[n];
	soma = 0;
	
	for(int i = 0; i<n; i++){
		printf("Digite um numero: ");
		scanf("%lf", &vetor[i]);
		soma += vetor[i];
	}
	printf("\n");
	printf("VALORES = ");
	for(int j = 0; j<n; j++){
		printf("%.1lf ", vetor[j]);
	}
	printf("\nSOMA = %.2lf\n", soma);
	printf("MEDIA = %.2lf\n", (soma/n));
	
	
	return 0;
}