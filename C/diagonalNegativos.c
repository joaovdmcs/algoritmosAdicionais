#include <stdlib.h>
#include <stdio.h>


int main(){
	
	int n;
	printf("Qual a ordem da matriz? ");
	scanf("%i", &n);
	int ma[n][n];
	int nega = 0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		printf("Elemento [%i,%i]: ", i, j);
		scanf("%i", &ma[i][j]);
		if(ma[i][j] < 0) nega++;
		}
	}
	
	printf("DIAGONAL PRINCIPAL: \n");
	for(int k = 0; k<n; k++) printf("%i ", ma[k][k]);
	
	printf("\n");
	
	printf("QUANTIDADE DE NEGATIVOS = %i\n", nega);

	
	return 0;
	
}