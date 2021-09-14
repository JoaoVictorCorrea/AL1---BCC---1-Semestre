#include<stdio.h>

int main(){
	
	int vetor[10], i, cont = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(vetor[9] == vetor[i])
			cont++;
	}
	
	printf("O numero %d apareceu %d vezes\n", vetor[9], cont);
	
	return 0;
}
