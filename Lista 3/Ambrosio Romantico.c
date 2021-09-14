#include<stdio.h>

int const MAX = 1000;

int main(){
	
	int n, e;
	int i, j, cond, aux;
	int v[MAX];
	
	scanf("%d %d", &n, &e);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
	}
	
	cond = 0;
	i = 0;
	
	while(cond == 0 && i < n){
		
		aux = v[i];
		
		for(j = 0; j < n; j++){
			
			if(v[i] + v[j] == e && i != j)
				cond = 1;
		}
		
		i++;
	}
	
	if(cond == 1)
		printf("SIM\n");
	else
		printf("NAO\n");
	
	return 0;
}
