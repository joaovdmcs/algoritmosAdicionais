#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n,m;
	printf("Qual a quantidade de linhas da matriz? ");
	scanf("%i", &n);
	printf("Qual a quantidade de colunas da matriz? ");
	scanf("%i", &m);
	
	double ma[n][m];
	double somaLinhas, vector[n]; 
	
	for(int i=0;i<n;i++){
		printf("Digite os elementos da %ia. linha:\n",(i+1));
		somaLinhas = 0;
		for(int j=0;j<m;j++){
			scanf("%lf", &ma[i][j]);
			somaLinhas += ma[i][j];
		}
		vector[i] = somaLinhas;
		
	}
	
	printf("VETOR GERADO:\n");
	for(int k=0; k<n; k++) printf("%.1lf\n", vector[k]);
	
	
	return 0;
}