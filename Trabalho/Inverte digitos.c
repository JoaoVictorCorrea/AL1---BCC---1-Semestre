#include<stdio.h>

const int MAX = 100000000;

int main(){
	
	int n, pri;
	int i, aux;
	
	scanf("%d", &n);
	
	while(n != 0){
		
		aux = 0;
		
		for(i = 0; i < MAX; i++){
			
			if(n <= i * 10){
			
				if(n == i * 10){
				
					pri = i;
					aux = i * 10;
				}
				else{
				
					pri = i - 1;
					aux = (i - 1) * 10;
				}
				
				aux = n - aux;
			
				while(pri >= 10){
		
					pri = pri / 10;
				}
				
				printf("[%d]", aux);
				
				n /= 10;
				
				i = 0;	
			}
			
			if(n == 0){
				
				i = MAX;
			}
		}
		
		printf("\n");
		
		scanf("%d", &n);
	}

	return 0;
}
