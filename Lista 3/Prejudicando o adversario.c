#include<stdio.h>

const int MAX = 100;

int main(){
	
	int i, j, n;
	int m[MAX][MAX], mT[MAX][MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n");
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			
			mT[i][j] = m[j][i];
			
			if(mT[i][j] < 0)
				mT[i][j] *= 2;
				
			if(j != 0)
				printf(" ");
			
			printf("%d", mT[i][j]);
		}
		
		printf("\n");	
	}
	
	return 0;
}
