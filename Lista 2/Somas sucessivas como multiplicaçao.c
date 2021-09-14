#include <stdio.h>

int main(){
	
	int x, y, resultado = 0, i;
	
	scanf("%d%d", &x, &y);
	
	if(x < 0){
		for(i = 0; i > x; i--){
		
			resultado-= y;
		}
	}
	else{
		
		for(i = 0; i < x; i++){
		
			resultado+= y;
		}	
	}
	
	printf("%d\n", resultado);
	
	return 0;
}
