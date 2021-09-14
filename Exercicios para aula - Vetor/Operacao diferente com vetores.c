#include<stdio.h>

int main(){
	
	float v1[100], v2[100], aux;
	int i, n;
	char op;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%f", &v1[i]);
	}
	
	for(i = 0; i < n; i++){
		
		scanf("%f", &v2[i]);
	}
	
	getchar();	
	scanf("%c", &op);
	
	switch(op){
		case '<':
			for(i = 0; i < n; i++){
			
				aux = (v1[i] - 10) + v2[i];
			
				printf("%.2f ", aux);
			
			}
			break;
		
		case '>':
			for(i = 0; i < n; i++){
			
				aux = (v1[i] + 10) - v2[i];
			
				printf("%.2f ", aux);
			
			}
			break;
	}
	
	printf("\n");	
	
	return 0;
}
