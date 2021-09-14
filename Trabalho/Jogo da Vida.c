#include <stdio.h>

int main(){
	
	int i, j, k;
	int n, m, v, g, x, y;
	int ma[45][45] = {{0}};
	int mAux[45][45] = {{0}};
	
	scanf("%d %d %d %d", &n, &m, &v, &g);
	
	for(i = 0; i < v; i++){
		
		scanf("%d %d", &x, &y);
		
		if(x < n && y < m){
			
			ma[x][y] = 1;
			mAux[x][y] = 1;
		}
	}
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < m; j++){
			
			printf(" ");
			
			printf("%d", ma[i][j]);
		}
		
		printf("\n");
	}
	
	
	for(i = 0; i < g; i++){
		
		for(j = 0; j < n; j++){
		
			for(k = 0; k < m; k++){
			
				ma[j][k] = mAux[j][k];
			}
		}
		
		printf("\n");
		
		for(j = 0; j < n; j++){
		
			for(k = 0; k < m; k++){
				
				if(j - 1 >= 0 && k - 1 >= 0){
					
					if(ma[j][k] == 1){
					
						if((ma[j-1][k-1] + ma[j-1][k] + ma[j-1][k+1]
					 		+ ma[j][k-1] + ma[j][k+1]
							+ ma[j+1][k-1] + ma[j+1][k] + ma[j+1][k+1]) < 2){
						
						
							mAux[j][k] = 0;
						}
					
						if((ma[j-1][k-1] + ma[j-1][k] + ma[j-1][k+1]
					 		+ ma[j][k-1] + ma[j][k+1]
							+ ma[j+1][k-1] + ma[j+1][k] + ma[j+1][k+1]) > 3){
						
						
							mAux[j][k] = 0;
						}
					
						if((ma[j-1][k-1] + ma[j-1][k] + ma[j-1][k+1]
					 		+ ma[j][k-1] + ma[j][k+1]
							+ ma[j+1][k-1] + ma[j+1][k] + ma[j+1][k+1]) == 3
						 	||
							(ma[j-1][k-1] + ma[j-1][k] + ma[j-1][k+1]
					 		+ ma[j][k-1] + ma[j][k+1]
							+ ma[j+1][k-1] + ma[j+1][k] + ma[j+1][k+1]) == 2){
						
						
							mAux[j][k] = 1;
						}
					}
					else{
					
						if((ma[j-1][k-1] + ma[j-1][k] + ma[j-1][k+1]
					 		+ ma[j][k-1] + ma[j][k+1]
							+ ma[j+1][k-1] + ma[j+1][k] + ma[j+1][k+1]) == 3){
						
							mAux[j][k] = 1;
						}
					}	
				}
				
				printf(" ");
			
				printf("%d", mAux[j][k]);;				
			}
			
			printf("\n");		
		}
	}
	
	return 0;
}
