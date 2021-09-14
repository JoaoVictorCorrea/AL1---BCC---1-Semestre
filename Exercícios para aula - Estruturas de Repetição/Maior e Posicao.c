#include <stdio.h>

int main(){
	
	int n, i, pos, maior = 0;
	
	for(i = 0; i < 100; i++){
		
		scanf("%d", &n);
		
		if(n > maior){
			maior = n;
			pos = i;	
		}
	}
	
	printf("%d\n%d\n", maior, pos+1);
	
	return 0;
}
