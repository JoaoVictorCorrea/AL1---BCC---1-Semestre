#include <stdio.h>

int main(){
	
	int r, ultimo, soma = 0, aux = 1;
	
	scanf("%d%d", &r, &ultimo);
	
	while(aux != ultimo){
		
		aux += r;
		soma += aux; 
	}
	
	printf("A somatoria da PA eh: %d\n", soma + 1);
	
	return 0;
}
