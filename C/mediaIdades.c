#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double soma;
	int count, x;
	printf("Digite as idades:\n");
	scanf("&i",&x);
	soma = 0;
	count = 0;
	
	while(x>=0){
		soma = soma + (double)x;
		count++;
		scanf("&i",&x);
	}
	if(count=0) printf("IMPOSSIVEL CALCULAR\n");
	
	else printf("MEDIA = %.2lf", (soma/count));
	
	return 0;
}