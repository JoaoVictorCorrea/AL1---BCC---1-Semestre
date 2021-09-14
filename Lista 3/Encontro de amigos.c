#include<stdio.h>

int const MAX = 1000;

int main(){
	
	int i, j, maior;
	int n, menorDist, dist, encontro;
	int v[MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
	}
	
	maior = v[0];
	
	for(i = 1; i < n; i++){
		
		if(v[i] > maior)
			maior = v[i];
	}
	
	
	for(i = 1; i < maior; i++){
		
		dist = 0;
		
		for(j = 0; j < n; j++){
			
				
			if(i > v[j]){
					
				dist += i - v[j];
			}
			else{
					
				dist += v[j] - i;
			}	
		}
	
		
		if(i == 1){
			menorDist = dist;
			encontro = i;
		}
		else{
			
			if(dist < menorDist){
				
				menorDist = dist;	
				encontro = i;
			}
		}	
	}
	
	printf("%d %d\n", menorDist, encontro);
	
	return 0;
}
