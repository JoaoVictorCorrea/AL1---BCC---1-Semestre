#include<stdio.h>

const int MAX = 10000;

int main(){
	
	int n, m, k;
	int i, j, cont;
	int v1[MAX], v2[MAX], f[MAX];
	
	scanf("%d%d%d", &n, &m, &k);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v1[i]);
	}
	
	for(i = 0; i < m; i++){
		
		scanf("%d", &v2[i]);
	}
	
	if(k == 1){
		
		if(n > m){
		
			cont = 0;
		
			for(i = 0; i < n; i++){
			
				if(i < m){
				
					f[cont] = v2[i];
					cont++;
				}
				
				f[cont] = v1[i];
			
				cont++;
			}
		}
		else{
			
			cont = 0;
		
			for(i = 0; i < m; i++){
		
				f[cont] = v2[i];
			
				if(i < n){
				
					cont++;
					f[cont] = v1[i];
				}
			
				cont++;
			}
		}
	}
	else{
		
		if(n > m){
		
			cont = 0;
		
			for(i = 0; i < n; i++){
		
				f[cont] = v1[i];
			
				if(i < m){
				
					cont++;
					f[cont] = v2[i];
				}
			
				cont++;
			}
		}
		else{
			
			cont = 0;
		
			for(i = 0; i < m; i++){
		
				if(i < n){
				
					f[cont] = v1[i];
					cont++;
				}
				
				f[cont] = v2[i];
			
				cont++;
			}
		}
	}
	
	for(i = 0; i < n + m; i++){
		
		printf("%d\n", f[i]);
	}
	
	
	return 0;
}
