#include <stdio.h>

int main(){
	
	int n, cont, i, num, j;

	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &num);
		
		cont = 0;
		
		for(j = 2; j < num; j++){
			
			if(num % j == 0)
				cont++;
			
		}
		
		if(cont > 0 || num == 0 || num == 1)
			printf("%d nao eh primo\n", num);
		else
			printf("%d eh primo\n", num);
			
	}
	
	return 0;
}
