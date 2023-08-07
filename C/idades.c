#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	char nome1[50], nome2[50];
	int idade1, idade2;
	
	printf("Dados da primeira pessoa: \n");
	printf("Nome: ");
	gets(nome1);
	printf("Idade: ");
	scanf("%i", &idade1);
	
	printf("Dados da segunda pessoa: \n");
	printf("Nome: ");
	fseek(stdin, 0, SEEK_END);  //flush na entrada
	gets(nome2);
	printf("Idade: ");
	scanf("%i", &idade2);
	
	printf("Idade media: %.1lf\n", (double) (idade1+idade2)/2);
	
	
	
	return 0;
}