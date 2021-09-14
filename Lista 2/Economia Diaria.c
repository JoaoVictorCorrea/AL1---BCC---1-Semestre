#include <stdio.h>

int main(){
	
	int i, cont = 0;
	float x, soma = 0.0, diaAnterior;
	
	for(i = 0; i < 7; i++){
		
		scanf("%f", &x);
		
		if(i != 0 && x - diaAnterior >= 0.5){
			soma += x;
			cont++;
		}
		else{
			soma += x;
		}
		
		diaAnterior = x;
	}
	
	printf("R$%.2f\n%d\n", soma, cont);
	
	return 0;
}
