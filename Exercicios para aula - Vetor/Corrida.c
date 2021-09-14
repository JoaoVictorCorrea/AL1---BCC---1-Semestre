#include<stdio.h>

int main(){
	
	int n, m, i, j, soma, x, menor, aux;
	int v[100], vaux[100];
	
	scanf("%d%d", &n, &m);
	
	for(i = 0; i < n; i++){
		
		soma = 0;
		
		for(j = 0; j < m; j++){
			
			scanf("%d", &x);
			soma+= x;
		}
		
		v[i] = soma;
		vaux[i] = v[i];
	}
	
	for(i = 0; i < n - 1; i++){
		
		menor = i;
		
		for(j = i + 1; j < n; j++){
			
			if(vaux[j] < vaux[menor]){
				
				menor = j;
			}
		}
		
		if(menor != i){
			
			aux = vaux[menor];
			vaux[menor] = vaux[i];
			vaux[i] = aux;
		}
	}
	
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < n; j++){
			
			if(vaux[i] == v[j]){
				
				printf("%d\n", j + 1);
			}
		}
	}
	
	return 0;
}
