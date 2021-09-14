#include<stdio.h>

const int max = 3;

int main(){
	
	int m[max][max];
	int i, j, maior, delta, somaD;
	double soma, media;
	
	soma = 0.0;
	somaD = 0;
	media = 0.0;
	
	for(i = 0; i < max; i++){
		
		for(j = 0; j < max; j++){
			
			scanf("%d", &m[i][j]);
			
			soma += m[i][j];
			
			if(m[i][j] > maior || (i == 0 && j == 0))
				maior = m[i][j]; 
				
			if(i == j)
				somaD += m[i][i];
		}
	}
	
	media = soma / 9;
	
	if(maior > 0){
		
		delta = 1;
	}
	else{
		
		if(maior < 0){
			
			delta = -1;
		}
		else{
			
			delta = 0;
		}
	}	
	
	printf("%.2lf %d %d %d\n", media, maior, delta, somaD);
		
	return 0;
}
