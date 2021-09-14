#include<stdio.h>

int main(){
	
	int i, j;
	int n, m, x;
	int quant, aux;
	
	scanf("%d %d", &n, &m);
	
	quant = 0;
	
	for(i = 0; i < n; i++){
		
		aux = 0;
		
		for(j = 0; j < m; j++){
			
			scanf("%d", &x);
			
			if(x == 0 && aux == 0){
				
				quant++;
				aux++;
			}
		}
	}
	
	printf("%d\n", quant);
	
	quant = n - quant;
	
	printf("%d\n", quant);
	
	return 0;
}
