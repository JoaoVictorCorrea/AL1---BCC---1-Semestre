#include<stdio.h>

int main(){
	
	int c, n, maior, menor, moda, cont, contModa, indModa, soma;
	int i, j, k, aux;
	int v[1000], f[1000];
	double media, mediana;
	
	scanf("%d", &c);
	
	cont = 1;
	
	for(i = 0; i < c; i++){
		
		scanf("%d", &n);
		
		soma = 0;
		
		//lê os numeros
		for(j = 0; j < n; j++){ 
			
			scanf("%d", &v[j]);
			f[j] = 1;
			soma += v[j];
		}
		
		printf("sequencia %d:\n", cont);
		
		//coloca em ordem crescente
		for(j = 0; j < n-1; j++){ 
		
			menor = j;
		
			for(k = j+1; k < n; k++){
			
				if(v[k] < v[menor]){
				
					menor = k;
				}
			}
		
			if(menor != j){
			
				aux = v[menor];
				v[menor] = v[j];
				v[j] = aux;
			}		
		}
		
		media = (double) soma / n; //calculo media
		menor = v[0];
		maior = v[0];
		
		// Calcula o menor e maior
		for(j = 0; j < n; j++){ 
			
			printf("%d ", v[j]);
			
			if(v[j] > maior)
				maior = v[j];
				
			if(v[j] < menor)
				menor = v[j];
		}
		
		printf("\n");
		
		// imprime maior e menor
		printf("%d %d\n", menor, maior); 
		
		// imprime media
		printf("%g\n", media); 
		
		indModa = 0;
		moda = -1;
		
		//calcula a frequencia que se repete os numeros
		for(j = 0; j < n-1; j++){ 
		
			if(f[j] != -1){
			
				contModa = 1;
			
				for(k = j + 1; k < n; k++){
				
					if(v[k] == v[j]){
					
						contModa++;
						f[k] = -1;
					}
				}
			
				f[j] = contModa;
				
				if(f[indModa] < f[j]){
					
					indModa = j;
					moda++;
				}
				
				if(f[j] > 1)
					moda++;	
			}
		}
		
		// imprime a moda
		if(moda != -1){ 
			
			for(j = 0; j < n; j++){
		
				if(f[j] == f[indModa]){
						
					printf("%d ", v[j]);
				}
			}
			
			printf("\n");
		} 	
		else
			printf("\n");
		
		// calcula a mediana
		if(n % 2 != 0){ 
			
			mediana = v[n/2];
		}
		else{
	
			mediana = (double) (v[n/2] + v[n/2 - 1]) / 2;
		}
		
		// imprime a mediana
		printf("%g\n", mediana); 
		
		cont++;
	}
	
	return 0;
}
