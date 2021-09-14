#include<stdio.h>

int main(){
	
	int m[2][4][3] = {
						{
							{1, 2, 3},
							{-1, -2, -3},
							{4, 5, 6},
							{-4, -5, -6}
						},
						{
							{-1, -2, -3},
							{1, 2, 3},
							{-4, -5, -6},
							{4, 5, 6}
						}
					};
	
	int i, j, k;
	
	for(i = 0; i < 2; i++){
		
		printf("Matriz %d:\n", i + 1);
		for(j = 0; j < 4; j++){
			
			for(k = 0; k < 3; k++){
				
				printf("%2d ", m[i][j][k]);
			}
			
			printf("\n");
		}
		
		printf("\n\n");
	}
	
	return 0;
}
