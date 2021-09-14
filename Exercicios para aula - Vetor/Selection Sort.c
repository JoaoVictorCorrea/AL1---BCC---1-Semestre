#include<stdio.h>

const int MAX = 12;

int main(){
	
	int v[MAX];
	int i, j, k, menor = 0, aux;
	
	for(i = 0; i < MAX; i++){
		
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < MAX - 1; i++){ 
			
		menor = i;
			
		for(j = i + 1; j < MAX; j++){
			
			if(v[j] < v[menor]){
				
				menor = j;
			}
		}
		
		printf("Menor elemento neste passo: %d\n", v[menor]);
			
		if(menor != i){
			
			aux = v[menor];
			v[menor] = v[i];
			v[i] = aux;
		}
		
		printf("Estado Atual: %d", v[0]);
		
		for(k = 1; k < MAX; k++){
		
			printf(" | %d", v[k]);
		}
		
		printf("\n\n");
	}
	
	printf("Resultado Final: %d", v[0]);
	
	for(k = 1; k < MAX; k++){
		
		printf(" | %d", v[k]);
	}
	
	return 0;
}
