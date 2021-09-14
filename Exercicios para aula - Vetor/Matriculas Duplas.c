#include<stdio.h>

int main(){
	
	int prog2[45], prog3[30], i, j;
	
	for(i = 0; i < 45; i++){
		
		scanf("%d", &prog2[i]);
	}
	
	for(i = 0; i < 30; i++){
		
		scanf("%d", &prog3[i]);
	}
	
	for(i = 0; i < 45; i++){
		
		for(j = 0; j < 30; j++){
			
			if(prog2[i] == prog3[j])
				printf("%d ", prog2[i]);
		}
	}
	
	printf("\n");
	
	return 0;
}
