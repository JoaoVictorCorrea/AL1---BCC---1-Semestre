#include<stdio.h>

int main(){
	
	int n, i, contAcima = 0, contAbaixo = 0;
	float notas[2000], media, soma = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	media = soma / n;
	
	for(i = 0; i < n; i++){
		
		if(notas[i] >= media + (media * 0.1))
			contAcima++;
		else{
			if(notas[i] <= media - (media * 0.1))
				contAbaixo++;
		}
	}
	
	printf("%.2f\n%d\n%d\n", media, contAcima, contAbaixo);
	
	return 0;
}
