#include<stdio.h>

int main(){
	
	int n, vetor[100], i;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i = n - 1; i >= 0; i--){
		printf("%d", vetor[i]);
		if(i == 0)
			printf("\n");
		else
			printf(" ");
	}
	
	return 0;
}
