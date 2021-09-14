#include<stdio.h>

const int max = 50;

int main(){
	
	int v[max], f[max];
	
	int n, i, j, menor, maior = 0, cont, maxrepet = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
		f[i] = 1;
	}
	
	for(i = 0; i < n-1; i++){
		
		if(f[i] != -1){
			
			cont = 1;
			
			for(j = i + 1; j < n; j++){
				
				if(v[j] == v[i]){
					
					cont++;
					f[j] = -1;
				}
			}
			
			f[i] = cont;	
		}
	}
	
	for(i = 1; i < n; i++){
		
		if(f[i] > f[maior]){
			
			maior = i;
		}
		else{
			
			if(f[i] == f[maior]){
				
				if(v[i] < v[maior]){
					
					maior = i;
				}
			}
		}
	}
	
	for(i = 0; i < n; i++){
		
		if(v[maior] == v[i]){
			
			cont = 0;
			
			while(v[maior] == v[i]){
				
				cont++;
				i++;
			}
			
			if(cont > maxrepet){
				
				maxrepet = cont;
			}
		}
	}
	
	printf("%d\n%d\n%d\n", v[maior], f[maior], maxrepet);
	
	return 0;
}
