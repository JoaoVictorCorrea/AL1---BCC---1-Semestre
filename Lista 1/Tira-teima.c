#include <stdio.h>

int main(){
	
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	if(x <= 432 && x >= 0 && y <= 468 && y >= 0){
		printf("dentro\n");
	}
	else{
		printf("fora\n");
	}
	
	return 0;
}
