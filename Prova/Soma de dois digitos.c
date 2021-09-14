#include<stdio.h>

int main(){
	
	int n, ult, pri;
	int i, soma, aux;
	
	scanf("%d", &n);
	
	aux = 0;
		
	for(i = 0; i < 1000; i++){
			
		if(n <= i * 10){
			
			if(n == i * 10){
				
				pri = i;
				aux = pri;
			}
			else{
				
				pri = i - 1;
				aux = pri;
			}
			
			i = 1000;
		}
	}
	
	while(pri >= 10){
		
		pri = pri / 10;
	}
	
	ult = n - (aux * 10);
	soma = ult + pri;
	
	printf("%d\n", soma);	
	
	return 0;
}
