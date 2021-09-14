#include <stdio.h>

int main(){
	
	int i, x, cont = 0;
	int v[10];
	
	for(i = 0; i < 10; i++){
		
		scanf("%d", &v[i]);
	}
	
	scanf("%d", &x);
	
	for(i = 0; i < 10; i++){
		
		if(v[i] == x)
			cont++;
	}
	
	printf("%d\n", cont);
	
	return 0;
}
