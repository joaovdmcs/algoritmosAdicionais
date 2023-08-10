#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	double a,b,c,delta,x1,x2;
	
	printf("Coeficiente A da funcao: ");
	scanf("%lf", &a);
	printf("Coeficiente B da funcao: ");
	scanf("%lf", &b);
	printf("Coeficiente C da funcao: ");
	scanf("%lf", &c);
	
	delta = ((b*b) - (4*a*c));

	if (delta < 0) printf("SEM SOLUCOES REAIS\n");
	
	else if (a == 0) {
			printf("EQUACAO NAO QUADRATICA\n");
			printf("SOLUCAO = %.4lf\n", ((-c)/b));
	}
	
	else{
		printf("EQUACAO QUADRATICA\n");
		
		x1 = ((-b) + sqrt(delta))/(2*a);
		x2 = ((-b) - sqrt(delta))/(2*a);
		
		printf("X1 = %.4lf | X2 = %.4lf\n", x1, x2);
		
		
	}


	return 0; //inclusao de '-lm' durante a compilacao em linux


}
