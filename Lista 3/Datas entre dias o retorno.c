#include<stdio.h>

const int MAX = 1000;

int main(){
	
	int n, quant, menor, aux;
	int i, j;
	int v1[MAX], v2[MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v1[i]);
		v2[i] = v1[i];
	}
	
	quant = 0;
	
	for(i = 0; i < n-1; i++){
		
		menor = i;
		
		for(j = i+1; j < n; j++){
			
			if(v1[j] < v1[menor]){
				
				menor = j;
			}
		}
		
		if(menor != i){
			
			aux = v1[menor];
			v1[menor] = v1[i];
			v1[i] = aux;
		}
	}
	
	for(i = 0; i < n; i++){
		
		if(v1[i] == v2[i]){
			
			quant++;
		}			
	}
	
	printf("%d\n", quant);
	
	for(i = 0; i < n; i++){
		
		if(v1[i] == v2[i]){
			
			printf("%d %d\n", v1[i], i + 1);
		}			
	}
	
	return 0;
}
