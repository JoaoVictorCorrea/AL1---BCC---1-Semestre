#include <stdio.h>

int main(){
	
	float valor, total;
	
	scanf("%f", &valor);
	
	total = valor + (valor * 0.1);
	
	printf("%.2f\n", total);

	return 0;
}
