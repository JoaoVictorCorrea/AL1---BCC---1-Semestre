#include<stdio.h>

const int MAX = 5;

int main(){
	
	int i, j, k, n; 
	int par[MAX], impar[MAX];
	
	j = 0;
	k = 0;
	
	for(i = 0; i < 15; i++){
		
		scanf("%d", &n);
		
		if(n % 2 == 0){
			
			if(j != 4){
				
				par[j] = n;
				j++;
			}
			else{
				
				par[j] = n;
				
				for(j = 0; j < 5; j++){
					
					printf("par[%d] = %d\n", j, par[j]);
				}
				
				j = 0;
			}
		}
		else{
			
			if(k != 4){
				
				impar[k] = n;
				k++;
			}
			else{
				
				impar[k] = n;
				
				for(k = 0; k < 5; k++){
					
					printf("impar[%d] = %d\n", k, impar[k]);
				}
				
				k = 0;
			}
		}
	}
	
	for(i = 0; i < k; i++){
		
		printf("impar[%d] = %d\n", i, impar[i]);
	}
	
	for(i = 0; i < j; i++){
		
		printf("par[%d] = %d\n", i, par[i]);
	}
	
	return 0;
}
