#include<stdio.h>
const int max = 3;

int main(){
	
	int m[max][max];
	int i, j, contPositivo = 0, menor, delta, soma = 0;
	double somaPositivo = 0, media;
	
	for(i = 0; i < max; i++){
		
		for(j = 0; j < max; j++){
			
			scanf("%d", &m[i][j]);
			
			if(m[i][j] > 0){
				
				somaPositivo += m[i][j];
				contPositivo++;
			}
			
			if((i == 0 && j == 0) || (m[i][j] < menor)){
				
				menor = m[i][j];
			}
			
			if(i != j){
				
				soma += m[i][j];
			}
		}
	}
	
	media = somaPositivo / contPositivo;
	delta = (menor % 2 == 0) ? 1 : 0;
	
	printf("%.2lf %d %d %d\n", media, menor, delta, soma);
	
	
	return 0;
}
