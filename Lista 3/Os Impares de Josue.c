#include<stdio.h>

const int MAX = 100000;

int main(){
	
	int v[MAX], f[MAX];
	int n, i, j, menor, aux, cont, x;
	
	x = 0;
	
	while(scanf("%d", &v[n]) == 1){		
	
		f[n] = 1;
		n++;
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
	
	for(i = 0; i < n; i++){
			
		printf("%d ", v[i]);
	}
	
	printf("\n");
	
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
			
		if(f[i] % 2 != 0 && f[i] > 0){
		
			printf("%d\n", v[i]);
			cont = 1;
		}
	}
	
	if(cont != 1)
		printf("0\n");
		
	return 0;
}
