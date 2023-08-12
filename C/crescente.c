#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,b;
	
	printf("Digite dois numeros:\n");
	scanf("%i", &a);
	scanf("%i", &b);
	
	do{
		if(a>b) printf("DECRESCENTE!\n");
		else printf("CRESCENTE!\n");
		
		printf("Digite outros dois numeros:\n");
		scanf("%i", &a);
		scanf("%i", &b);
		
	}while(a!=b);
	
	
	return 0;
}