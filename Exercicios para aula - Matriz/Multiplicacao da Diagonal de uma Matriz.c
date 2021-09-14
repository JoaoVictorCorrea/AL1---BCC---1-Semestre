#include<stdio.h>

const int max = 4;

int main(){
	
	int m[max][max];
	int k, i, j, aux;
	
	scanf("%d", &k);
	aux = k;
	
	while(k != 0){
		
		for(i = 0; i < max; i++){
		
			for(j = 0; j < max; j++){
			
				scanf("%d", &m[j][i]);
			}
		}
		
		scanf("%d", &k);
	}
	
	for(i = 0; i < max; i++){
		
		m[i][i] *= aux;
	}
	
	for(i = 0; i < max; i++){
		
		for(j = 0; j < max; j++){
			
			printf("%d ", m[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
