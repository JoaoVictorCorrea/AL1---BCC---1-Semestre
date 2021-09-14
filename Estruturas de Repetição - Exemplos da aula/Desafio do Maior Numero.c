#include<stdio.h>

int main(){
	
	int n, maior = 0;
		
	do{
		scanf("%d", &n);
		
		if(n > maior){
			maior = n;
		}
	}while(n != 0);
	
	printf("%d\n", maior);
	
	return 0;
}
