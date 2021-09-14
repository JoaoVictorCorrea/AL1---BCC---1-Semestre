#include<stdio.h>

const int MAX = 1000;

int main(){
	
	int i, j;
	int n, maior, menor, meio, aux;
	int v[MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
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
	
	maior = v[n-1];
	menor = v[0];
	meio = v[n/2];
	
	printf("%d %d %d\n", menor, meio, maior);
	
	return 0;
}
