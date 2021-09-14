#include <stdio.h>

int main(){
	
	int N, C, S, E, i, aux = 0, dentro = 0;
	
	scanf("%d%d", &N, &C);
	
	for(i = 0; i < N; i++){
		
		scanf("%d%d", &S, &E);
		
		dentro+= E;
		dentro-= S;
		
		if(dentro > C){
			aux = 1;
		}
	}
	
	if(aux == 1){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	
	return 0;
}
