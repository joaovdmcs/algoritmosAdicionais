#include <stdlib.h>
#include <stdio.h>


int main(){
	
	int n,x;
	printf("Quantos numeros voce vai digitar? ");
	scanf("%i", &n);
	int arr[n];
	int negarr[n];
	
	for(int z =0; z < n; z++){
		negarr[z] = 0;
	}
	
	
	for(int i = 0; i<n; i++){
		printf("Digite um numero: ");
		scanf("%i", &arr[i]);
		if(arr[i]<0) negarr[i] = 1;
	}
	
	printf("NUMEROS NEGATIVOS:\n");
	for(int j = 0; j < n; j++){
		if(negarr[j]) printf("%i\n",arr[j]);
	}
}