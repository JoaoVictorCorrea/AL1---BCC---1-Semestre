#include<stdio.h>

int main(){
	
	int m[100][100], mT[100][100];
	int i, j, R, C;
	
	scanf("%d%d", &R, &C);
	
	for(i = 0; i < R; i++){
		
		for(j = 0; j < C; j++){
			
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n");
	
	for(i = 0; i < C; i++){
		
		for(j = 0; j < R; j++){
			
			mT[i][j] = m[j][i];
			
			printf("%d ", mT[i][j]);
		}
		
		printf("\n");	
	}
	
	return 0;
}
