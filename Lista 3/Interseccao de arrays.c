#include<stdio.h>

const int MAX = 101;

int main(){
	
	int n;
	int i, j, cont, aux, menor;
	int v1[MAX], v2[MAX], v3[MAX], f[MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v1[i]);
	}
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v2[i]);
	}
	
	for(i = 0; i < n-1; i++){
		
		if(f[i] != -1){
			
			cont = 1;
			
			for(j = i + 1; j < n; j++){
				
				if(v1[j] == v1[i]){
					
					f[j] = -1;
				}
			}
			
			f[i] = cont;
		}
	}
	
	for(i = 0; i < n; i++){
		
		if(f[i] != -1){
			
			cont = 1;
			
			for(j = 0; j < n; j++){
				
				if(v2[j] == v1[i]){
					
					cont++;
				}
			}
			
			f[i] = cont;
		}
	}
	
	cont = 0;
	
	for(i = 0; i < n; i++){
			
		if(f[i] > 1){
		
			v3[cont] = v1[i];
			cont++;
		}
	}
	
	for(i = 0; i < cont-1; i++){ 
		
		menor = i;
		
		for(j = i+1; j < cont; j++){
			
			if(v3[j] < v3[menor]){
				
				menor = j;
			}
		}
		
		if(menor != i){
			
			aux = v3[menor];
			v3[menor] = v3[i];
			v3[i] = aux;
		}		
	}
	
	for(i = 0; i < cont; i++){
			
		printf("%d\n", v3[i]);
	}
	
	return 0;
}
