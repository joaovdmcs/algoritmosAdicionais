#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int x,y,z,menor,maior;
	
	printf("Digite dois numeros:\n");
	scanf("%i",&x);
	scanf("%i",&y);
	
	if(x>y){
		maior = x;
		menor = y;
	}
	
	else{
		maior = y;
		menor = x;
	}
	
	z = 0;
	for(int i = (menor+1); i<maior; i++){
		if((i%2)!=0) z+=i;
	}
	
	printf("SOMA DOS IMPARES = %i\n", z);
	
}