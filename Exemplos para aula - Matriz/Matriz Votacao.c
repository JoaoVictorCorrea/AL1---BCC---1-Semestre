#include<stdio.h>

int main(){
	
	int p, e, m[100][50];
	int i, k, qtd;
	
	scanf("%d%d", &p, &e);
	
	for(i = 0; i < e; i++){
		
		for(k = 0; k < p; k++){
			scanf("%d", &m[i][k]);
		}
	}
	
	for(k = 0; k < p; k++){
		
		for(i = 0, qtd = 0; i < e; i++){
			
			qtd += m[i][k];
		}
		
		printf("Princesa %d: %d voto(s)\n", k+1, qtd);
	}
	
	return 0;
}
