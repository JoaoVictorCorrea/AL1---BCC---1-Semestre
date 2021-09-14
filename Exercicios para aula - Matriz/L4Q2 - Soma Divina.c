#include<stdio.h>

int main(){
	
	int m1[100][100], m2[100][100], mr[100][100];
	int i, j, n;
	
	scanf("%d", &n);
	
	if(n != 0){
		
		for(i = 0; i < n; i++){
		
			for(j = 0; j < n; j ++){
			
				scanf("%d", &m1[i][j]);
			}
		}
		
		for(i = 0; i < n; i++){
		
			for(j = 0; j < n; j ++){
			
				scanf("%d", &m2[i][j]);
				
				mr[i][j] = m1[i][j] + m2[i][j];
			}
		}
		
		for(i = 0; i < n; i++){
		
			for(j = 0; j < n; j ++){
			
				
				printf("%d\n", mr[i][j]);
			}
		}
	}
	else{
		printf("Vazia\n");
	}
	
	
}
