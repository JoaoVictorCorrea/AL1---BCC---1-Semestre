#include <stdio.h>

int main(){
	
	int n, m, vencedor, i, j, soma, maior, tempo;
	
	scanf("%d%d", &n, &m);
	
	for(i = 0; i < n; i++){
		
		soma = 0;
		
		for(j = 0; j < m; j++){
			
			scanf("%d", &tempo);
			soma+= tempo;
		}
		
		if(i == 0){
			maior = soma;
			vencedor = i + 1;
		}
		else{
			if(soma < maior){
				maior = soma;
				vencedor = i + 1;
			}
		}
	}
	
	printf("%d\n", vencedor);
	
	return 0;
}
