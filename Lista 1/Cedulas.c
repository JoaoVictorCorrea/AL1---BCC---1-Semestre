#include <stdio.h>

int main(){
	
	int valor, notas, resto;
	
	scanf("%d", &valor);
	
	printf("%d\n", valor);
	
	if(valor > 0){
		notas = valor / 100;
		resto = valor - (notas * 100);
		
		printf("%d nota(s) de R$ 100,00\n", notas);
		
		notas = resto / 50;
		resto = resto - (notas * 50);
		
		printf("%d nota(s) de R$ 50,00\n", notas);
		
		notas = resto / 20;
		resto = resto - (notas * 20);
		
		printf("%d nota(s) de R$ 20,00\n", notas);
		
		notas = resto / 10;
		resto = resto - (notas * 10);
		
		printf("%d nota(s) de R$ 10,00\n", notas);
		
		notas = resto / 5;
		resto = resto - (notas * 5);
		
		printf("%d nota(s) de R$ 5,00\n", notas);
		
		notas = resto / 2;
		resto = resto - (notas * 2);
		
		printf("%d nota(s) de R$ 2,00\n", notas);
		
		notas = resto / 1;
		resto = resto - (notas * 1);
		
		printf("%d nota(s) de R$ 1,00\n", notas);
	}

	return 0;
}
