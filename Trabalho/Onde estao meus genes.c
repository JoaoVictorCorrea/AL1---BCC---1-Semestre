#include<stdio.h>

int main(){
	
	int n, r, x, y, q;
	int i, j, aux, aux2, indX, indY, indX1, indY1, qtd = 1;
	int v[50000] = {0};
	
	scanf("%d", &n);
	
	while(n != 0 && n <= 50000){
		
		for(i = 1; i <= n; i++){
		
			v[i] = i;
		}
	
		scanf("%d", &r);
		
		if(r <= 1000 && r >=0){
			
			for(i = 0; i < r; i++){
		
				scanf("%d %d", &x, &y);
		
				if(n >= y && y >= x && x >= 1){
					
					for(j = 0; j <= n; j++){
		
						if(v[j] == x){
							
							aux = v[j];
							indX = j;
							indX1 = j + 1;
						}
					}
					
					aux2 = v[indX1];
					
					for(j = 0; j <= n; j++){
		
						if(v[j] == y){
							
							v[indX] = v[j];
							indY = j;
							indY1 = j - 1;
						}
					}
					
					v[indX1] = v[indY1];
				
					v[indY] = aux;
					v[indY1] = aux2;
				}
			}	
		}
	
		scanf("%d", &q);
	
		printf("Genome %d\n", qtd);
	
		for(i = 0; i < q; i++){
		
			scanf("%d", &x);
		
			printf("%d\n", v[x]);
		}
		
		scanf("%d", &n);
		qtd++;
	}
	
	return 0;
}
