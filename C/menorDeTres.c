#include <stdio.h>
#include <stdlib.h>

int main() {
	int valores[3];
	int menor;
	
    printf("Primeiro valor: ");
	scanf("%i", &valores[0]);
	printf("Segundo valor: ");
	scanf("%i", &valores[1]);
	printf("Terceiro valor: ");
	scanf("%i", &valores[2]);


	menor = valores[0];
	for (int i = 1; i < 3; i++){ if(valores[i] < menor) menor = valores[i];}
	
	printf("MENOR = %i\n", menor);

    return 0;
}