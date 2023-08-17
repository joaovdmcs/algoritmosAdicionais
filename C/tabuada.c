#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int n;
	
	printf("Deseja a tabuada para qual valor? ");
	scanf("%i", &n);
	
	for(int i=1;i<11;i++){
		
		printf("%i x %i = % i\n",n,i,n*i);
		
	}
	
	return 0;
}