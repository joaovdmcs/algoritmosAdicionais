#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int n;
	printf("Quantas pessoas serao digitadas? ");
	scanf("%i", &n);
	
	char nomes[n][50];
	int idades[n];
	double alturas[n];
	double somaAlturas = 0;
	for(int i=0; i<n; i++){
		printf("Dados da %ia pessoa:\n", (i+1));
		printf("Nome: ");
		fseek(stdin, 0, SEEK_END); // limpeza da quebra de linha
		gets(nomes[i]);
		printf("Idade: ");
		scanf("%i", &idades[i]);
		printf("Altura: ");
		scanf("%lf", &alturas[i]);
		
		somaAlturas += alturas[i];
		
	}
	
	
	printf("Altura media: %.2lf\n", somaAlturas/n);
	double countIdades = 0;
	printf("Pessoas menores de 16 anos: ");
	for(int j=0; j<n; j++){
		if(idades[j]<16){
			countIdades++;
			printf("%s ", nomes[j]);
		}
		
	}
	printf("\nPorcentagem: %.2lf%\n", (countIdades/n)*100);
	
	
	
	
	
	return 0;
}