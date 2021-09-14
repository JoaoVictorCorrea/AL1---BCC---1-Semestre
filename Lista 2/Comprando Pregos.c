#include <stdio.h>

int main(){
	
	int n, soma = 0, quant, sobra;
	double total;
	
	scanf("%d", &n);
	
	while(n % 2 == 0){
		
		soma+= n;
		
		scanf("%d", &n);
		
	}
	
	quant = soma / 12;
	
	if(soma % 12 != 0 ){
		quant++;
	}
	
	total = 7.89 * quant;
	
	sobra = quant * 12 - soma;
	
	printf("%.2lf\n%d\n", total, sobra);
	
	return 0;
}
