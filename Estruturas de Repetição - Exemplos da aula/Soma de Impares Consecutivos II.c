#include<stdio.h>

int main(){
	
	int n, x, y, soma, aux, i, j;
	
	scanf("%d", &n);
	for(j = 0; j < n; j++){
		scanf("%d%d", &x, &y);
		
		if(x < y){
			aux = x;
			x = y;
			y = aux;
		}
		
		soma = 0;
		
		for(i = y + 1; i < x; i++){
		
			if(i % 2 != 0)
				soma += i;
				
		}
		
		printf("%d\n", soma);
	}
	
	return 0;
}
