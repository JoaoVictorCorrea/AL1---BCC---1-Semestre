#include<stdio.h>

const int MAX = 4;

int main(){
	
	int i, j;
	double m[MAX][MAX];
	double soma;
	
	for(i = 0; i < MAX; i++){
		
		for(j = 0; j < MAX; j++){
			
			scanf("%lf", &m[i][j]);
		}
	}
	
	for(i = 0; i < MAX - 1; i++){
		
		soma = 0.0;
		
		for(j = 0; j < MAX; j++){
			
			soma += m[i][j] * m[MAX - 1][j];
		}
		
		printf("%.2lf\n", soma);
	}
	
	return 0;
}
