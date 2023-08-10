#include <stdio.h>
#include <stdlib.h>

int main(){

	double n1,n2;
	
	printf("Digite a primeira nota: ");
	scanf("%lf", &n1);
	printf("Digite a segunda nota: ");
	scanf("%lf", &n2);
	
	printf("Nota Final: %.1lf\n", (n1+n2));
	
	if (n1+n2 < 60.0) printf("REPROVADO\n");
	else printf("APROVADO\n");

	return 0;

}
