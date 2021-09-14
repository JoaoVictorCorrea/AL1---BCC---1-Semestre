#include<stdio.h>

const int MAX = 100;

int main(){
	
	int n, m;
	int i, j, somaP = 0, somaS = 0;
	int ma[MAX][MAX];
	
	scanf("%d%d", &n, &m);
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < m; j++){
			
			scanf("%d", &ma[i][j]);
		}
	}
	
	if(m != n){
		
		printf("A matriz nao possui traco\n");
	}
	else{
		
		for(i = 0; i < n; i++){
			
			somaP += ma[i][i];
			somaS += ma[i][n - 1 - i];
		}
		
		printf("%d\n%d\n", somaP, somaS);
	}
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < m; j++){
				
			if(j != 0)
				printf(" ");
			
			printf("%d", ma[i][j]);
		}
		
		printf("\n");	
	}
	
	return 0;
}
