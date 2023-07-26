#include <stdio.h>

int main(){
	int n;
	double s, m;
	
	
	printf("Numero de integrantes: ");
	scanf("%d", &n);
	
	double vetor[n];
	
	for (int i = 0; i < n; i++){
		printf("Nota: ");
		scanf("%lf", &vetor[i]);
	}
	
	s = 0;
	
	for (int j = 0; j < n; j++){
		s += vetor[j];
	}
	m = s/n;
	
	printf("\nMEDIA = %.2f\n", m);
	printf("ELEMENTOS ABAIXO DA MEDIA: ");
	
	for (int k = 0; k < n; k++){
		if (vetor[k] < m) {
			printf("%1f ", vetor[k]);
		}
	}
	
	
	return 0;
	
}
