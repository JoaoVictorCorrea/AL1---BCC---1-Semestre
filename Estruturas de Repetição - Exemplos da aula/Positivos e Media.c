#include<stdio.h>

int main(){
	
	float n, media, soma = 0;
	int i, cont = 0;
	
	
	for(i = 0; i < 6; i++){
		scanf("%f", &n);
		
		if(n > 0){
			cont++;
			soma += n;
		}
	}
	
	media = soma / cont;
	
	printf("%d valores positivos\n%.1f\n", cont, media);
	
	return 0;
}
