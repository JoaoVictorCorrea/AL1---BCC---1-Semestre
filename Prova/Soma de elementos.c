#include<stdio.h>

int main(){
	
	int n, x, i, j, cont;
	int v[100];
	
	scanf("%d%d", &n, &x);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
	}
	
	cont = 1;
	
	for(i = 0; i < n; i++){
		
		for(j = i + 1; j < n; j++){
			
			if(v[i] + v[j] == x){
				
				printf("%d: (%d, %d)\n", cont, v[i], v[j]);
				cont++;
			}
		}
	}
	
	if(cont == 1)
		printf("Inexistente\n");
	
	return 0;
}
