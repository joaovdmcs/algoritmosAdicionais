#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double soma, x;
	int count;
	printf("Digite as idades:\n");
	scanf("%lf",&x);
	soma = 0;
	count = 0;
	
	while(x>=0){
		soma = soma + x;
		count++;
		scanf("%lf",&x);
	}
	if(count==0) printf("IMPOSSIVEL CALCULAR\n");
	
	
	
	else printf("MEDIA = %.2lf\n", (soma/count));
	
	
	return 0;
}