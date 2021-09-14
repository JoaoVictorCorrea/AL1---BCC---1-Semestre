#include <stdio.h>

int main(){
	
	int n;
	float restante;
	
	scanf("%d", &n);
	
	restante = (42 * 1.75) - (n * 1.75);
	
	printf("%.2f", restante);

	return 0;
}
