#include <stdio.h>

int main(){
	
	float n1, n2, n3, n4, n5, n6;
	
	scanf("%f%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5, &n6);
	
	if(n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5 && n5 < n6){
		printf("Ganha brinquedo\n");
	}
	else{
		printf("Sem brinquedo\n");
	}
	
	return 0;
}
