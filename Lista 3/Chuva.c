#include<stdio.h>

const int MAX = 1000;

int main(){
	
	int i, j, n;
	int m[MAX][MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n * 2; i++){
		
		for(j = 0; j < n; j++){
			
			scanf("%d", &m[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
				
			printf("%d ", m[i][j] + m[i + n][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
