#include<stdio.h>

int const MAX = 40;

int main(){
	
	int i, j, p1 = 0, p2 = 0, p3 = 0;
	int n, d, cont;
	int v[MAX];
	
	scanf("%d %d", &n, &d);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
	}
	
	if(n >= 5 && n <= 40 && d >= 1 && d <= 31){
		
		for(i = 0; i < n; i++){
		
			for(j = 0; j < n; j++){
		
				if(i != j){
					
					if(v[i] + v[j] == d){
						
						p1 = 1;
						i = n;
						j = n;
					}
				}
			}
		}
		
		if(p1 == 1)
			printf("Promocao 1: SIM\n");
		else
			printf("Promocao 1: NAO\n");
			
		for(i = 0; i < n; i++){
		
			if(v[i] % 2 != 0)
				p2++;
		}
		
		if(p2 > (n / 2))
			printf("Promocao 2: SIM\n");
		else
			printf("Promocao 2: NAO\n");
			
		for(i = 0; i < n; i++){
			
			cont = 0;
		
			for(j = 2; j < v[i]; j++){
			
				if(v[i] % j == 0)
					cont++;
			}
		
			if(cont == 0 && v[i] != 0 && v[i] != 1){
				
				p3 = 1;
				i = n;
			}			
		}
		
		if(p3 == 1)
			printf("Promocao 3: SIM\n");
		else
			printf("Promocao 3: NAO\n");
			
		if(p1 == 1 && p2 > (n / 2) && p3 == 1)
			printf("Promocao 4: SIM\n");
		else
			printf("Promocao 4: NAO\n");
	}
	else{
		
		printf("ENTRADA INVALIDA\n");
	}
	
	return 0;
}
