#include<stdio.h>

int main(){
	
	int n, m, i, j, k, maior, aux, cont;
	int notas[1000], v[1000];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &m);
		
		for(j = 0; j < m; j++){
			
			scanf("%d", &notas[j]); //lendo as notas
			v[j] = notas[j];
		}

		for(j = 0; j < m - 1; j++){ //colocar em ordem decrescente as notas
			
			maior = j;
			
			for(k = j + 1; k < m; k++){
			
				if(v[k] > v[maior]){
				
					maior = k;
				}
			}
			
			if(maior != j){
			
				aux = v[maior];
				v[maior] = v[j];
				v[j] = aux;
			}
		}
		
		cont = m;
		
		for(j = 0; j < m; j++){ //comparando os vetores
			
			if(v[j] != notas[j]){
				cont--;
			}
		}
		
		printf("%d\n", cont);
	}
	
	
	return 0;
}
