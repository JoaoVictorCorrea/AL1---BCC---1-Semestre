#include <stdio.h>

const int MAX = 10;

int main(){
	
	int v[MAX], f[MAX];
	int n, i, j, menor, aux, cont;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
		f[i] = 1;
	}
	
	for(i = 0; i < n-1; i++){
		
		menor = i;
		
		for(j = i+1; j < n; j++){
			
			if(v[j] < v[menor]){
				
				menor = j;
			}
		}
		
		if(menor != i){
			
			aux = v[menor];
			v[menor] = v[i];
			v[i] = aux;
		}
	}
	
	for(i = 0; i < n-1; i++){
		
		if(f[i] != -1){
			
			cont = 1;
			
			for(j = i + 1; j < n; j++){
				
				if(v[j] == v[i]){
					
					cont++;
					f[j] = -1;
				}
			}
			
			f[i] = cont;
		}
	}
	
	for(i = 0; i < n; i++){
		
		if(f[i] != -1){
			
			printf("%d %d\n", v[i], f[i]);
		}
	}
	
	return 0;
}
