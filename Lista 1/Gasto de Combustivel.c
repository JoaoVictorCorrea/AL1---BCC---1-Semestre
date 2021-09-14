#include <stdio.h>

int main(){
	
	int tempo, vm;
	double total, distancia;
	
	scanf("%d%d", &tempo, &vm);
	
	distancia = tempo * vm;
	
	total = distancia / 12;
	
	printf("%.3lf\n", total);

	return 0;
}
