#include<stdio.h>

int main(){
	
	int vetor[101], i;
	
	for(i = 0; i < 101; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 100; i++){
		if(vetor[100] == vetor[i])
			printf("%d\n", i);
	}
	
	return 0;
}
