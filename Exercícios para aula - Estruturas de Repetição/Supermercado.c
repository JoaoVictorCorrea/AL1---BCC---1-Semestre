#include <stdio.h>

int main(){
	
	int n, g, i;
	float p, aux, menor = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		printf("\n");
		scanf("%f%d", &p, &g);
		aux = (p * 1000) / g;
		
		if(aux < menor || i == 0)
			menor = aux;
			
	}
	
	printf("%.2f\n", menor);
	
	return 0;
}	
