#include<stdio.h>

int const max = 5;

int main(){
	
	int pg[max];
	int i, j, menor, aux, cont;
	double q;
	
	for(i = 0; i < max; i++){
		
		scanf("%d", &pg[i]);
	}
	
	for(i = 0; i < max - 1; i++){
		
		menor = i;
		
		for(j = i + 1; j < max; j++){
			
			if(pg[j] < pg[menor]){
				
				menor = j;
			}
		}
		
		if(menor != i){
			
			aux = pg[menor];
			pg[menor] = pg[i];
			pg[i] = aux;
		}
	}
	
	q = (double)pg[1] / pg[0];
	cont = 1;
	
	for(i = 2; i < max; i++){
		
		if((double)pg[i] / pg[i-1] == q){
			cont++;
		}
	}
	
	if(cont == 4){
		
		printf("S\n");
		
		for(i = 0; i < max; i++){
			
			if(i != 0){
				
				printf(" ");
			}
			
			printf("%d", pg[i]);
		}
		
		printf("\n%.0lf\n", q);
	}
	else{
		
		printf("N\n");
	}
	
	return 0;
}
