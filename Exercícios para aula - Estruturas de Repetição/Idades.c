#include <stdio.h>

int main(){
	
	int idade = 0, cont = 0; 
	float media, soma = 0;
	
	while(idade >= 0){
		scanf("%d", &idade);
		
		if(idade > 0){
			soma += idade;
			cont++;
		}
	}
	
	media = soma / cont;
	
	printf("%.2f\n", media);
	
	return 0;
}
