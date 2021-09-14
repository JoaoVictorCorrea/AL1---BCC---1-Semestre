#include<stdio.h>

int main(){
	
	int F, I, aux;
	
	scanf("%d%d", &F, &I);
	
	if(F >= 150 && I >= 12){
		aux++;
	}
	
	if(F >= 140 && I >= 14){
		aux++;
	}
	
	if(F >= 170 || I >= 16){
		aux++;
	}
	
	printf("%d\n", aux);

	return 0;
}
