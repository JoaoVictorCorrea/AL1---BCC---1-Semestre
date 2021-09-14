#include<stdio.h>
#include <math.h>

int const MAX = 10000;

int main(){
	
	int i, j, quant;
	double n, soma;
	double media, desvio;
	double v[MAX];
	
	scanf("%lf", &n);
	i = 0;
	soma = 0.0;
	
	while(n != -1){
		
		v[i] = n;
		soma += v[i];
		
		i++;
		
		scanf("%lf", &n);
	}
	
	media = (double )soma / i;
	
	printf("%.2lf\n", media);
	
	soma = 0.0;
	
	for(j = 0; j < i; j++){
		
		soma += (v[j] - media) * (v[j] - media);
	}
	
	desvio = (double )soma / (i - 1);
	
	desvio = (double) sqrt(desvio);
	
	printf("%.2lf\n", desvio);
	
	quant = 0;
	
	for(j = 0; j < i; j++){
		
		if(v[j] > media)
			quant++;
	}
	
	printf("%d\n", quant);
	
	return 0;
}
