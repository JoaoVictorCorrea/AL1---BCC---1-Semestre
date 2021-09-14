#include<stdio.h>

const int MAX = 100;

int main(){
	
	int N, T, i, j, qtd, cont, maior;
	int v1[MAX], v2[MAX], aux[MAX * MAX], f[MAX * MAX];
	
	scanf("%d%d", &N, &T);
	
	for(i = 0; i < T; i++){
		scanf("%d", &v1[i]);
	}
	
	for(i = 0; i < T; i++){
		scanf("%d", &v2[i]);
	}
	
	qtd = 0;
	
	for(i  = 0; i < N - 1; i++){
		
		if(N - (i+2) < T && i < T){
			
			f[qtd] = 1;
			aux[qtd++] = v1[i] + v2[N - (i+2)];
		}
	}
	
	if(N - 1 < T){
		
		aux[qtd++] = v1[N - 1];
	
		aux[qtd++] = v2[N - 1];
	}
	
	
	
	maior = 0;
	
	for(i = 0; i < qtd; i++){
		
		if(f[i] != -1){
			
			cont = 1;
		
			for(j = i + 1; j < qtd; j++){
			
				if(aux[j] == aux[i]){
					
					cont++;
					f[j] = -1;
				}
			}
			
			f[i] = cont;	
			
		}
		
		if(aux[i] > aux[maior]){
			
			maior = i;
		}
	}
	
	printf("%d\n%d", f[maior], aux[maior]);
	
	return 0;
}
