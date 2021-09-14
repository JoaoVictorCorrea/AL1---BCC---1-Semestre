#include <stdio.h>

int main(){
	
	float peso, altura, imc;
	
	scanf("%f%f", &peso, &altura);
	
	imc = peso / (altura * altura);
	
	printf("%.2f\n", imc);

	return 0;
}
