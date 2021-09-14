#include<stdio.h>

const int MAX = 10;

int main(){
	
	int i, j, n, aux, cond = 0;
	int soma = 0, somaP = 0, somaS = 0;
	int m[MAX][MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		soma = 0;
		
		for(j = 0; j < n; j++){
			
			scanf("%d", &m[i][j]);
			soma += m[i][j];
			
			if(i == 0)
				aux = soma;
		}
		
		if(soma != aux)
			cond = 1;
	}
	
	if(cond == 0){
		
		for(i = 0; i < n; i++){
		
			soma = 0;
		
			for(j = 0; j < n; j++){
			
				soma += m[j][i];
			}
		
			if(soma != aux)
				cond = 1;
		}
		
		for(i = 0; i < n; i++){
			
			somaP += m[i][i];
			somaS += m[i][n - 1 - i];
		}
		
		if(somaP != aux || somaS != aux || cond == 1){
			
			printf("-1");
		}
		else{
			
			printf("%d\n", soma);
		}		
	}
	else{
		
		printf("-1");
	}
	
	return 0;
}
