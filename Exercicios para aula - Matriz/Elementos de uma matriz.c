#include<stdio.h>

int main(){
	
	int L, C, i, j, somaP = 0, somaS = 0, contP = 0, contN = 0;
	int m[100][100];
	
	scanf("%d", &L);
	scanf("%d", &C);
	
	for(i = 0; i < L; i++){
		
		for(j = 0; j < C; j++){
			
			scanf("%d", &m[i][j]);
			
			if(m[i][j] > 0){
				
				contP++;
			}
			
			if(m[i][j] < 0){
				
				contN++;
			}
		}
	}
	
	printf("Matriz formada:\n");
	
	for(i = 0; i < L; i++){
		
		for(j = 0; j < C; j++){
			
			if(j > 0){
				
				printf(" ");
			}
			
			printf("%d", m[i][j]);
		}
		
		printf("\n");
	}
	
	if(L == C){
		
		for(i = 0; i < L; i++){
			
			somaP += m[i][i];
			somaS += m[i][L - 1 - i];
		}
		
		printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", somaP, somaS);
	}
	else{
		
		printf("A diagonal principal e secundaria nao pode ser obtida.\n");
	}
	
	printf("A matriz possui %d numero(s) menor(es) que zero.\n", contN);
	printf("A matriz possui %d numero(s) maior(es) que zero.\n", contP);
	
	return 0;
}
