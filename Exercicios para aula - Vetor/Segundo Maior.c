#include<stdio.h>

int main(){
	
	int v[100], i, j, k, maior, aux;
	
	i = 0;
	scanf("%d", &v[i]);
	
	while(v[i] != 99){
		
		i++;	
		scanf("%d", &v[i]);
	}
	
	//ordena de maneira decrescente
	
	for(j = 0; j < i - 1; j++){
		
		maior = j;
		
		for(k = j + 1; k < i; k++){
			
			if(v[k] > v[maior]){
				
				maior = k;
			}
		}
		
		if(maior != j){
			
			aux = v[maior];
			v[maior] = v[j];
			v[j] = aux;
		}
	}
	
	printf("%d\n", v[1]);
	
	return 0;
}
