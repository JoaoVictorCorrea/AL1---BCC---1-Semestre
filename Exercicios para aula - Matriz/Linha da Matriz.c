#include<stdio.h>

const int max = 12;

int main(){
	
	int L, i, j;
	char T;
	double m[max][max], soma;
	
	scanf("%d", &L); getchar();
	
	scanf("%c", &T);
	
	for(i = 0; i < max; i++){
		
		for(j = 0; j < max; j++){
			
			scanf("%lf", &m[i][j]);
		}
	}
	
	soma = 0;
	
	for(i = 0; i < max; i++){
		
		soma += m[L][i];
	}
	
	if(T == 'S'){
		
		printf("%.1lf\n", soma);
	}
	else{
		
		printf("%.1lf\n", soma/max);
	}
	
	return 0;
}
