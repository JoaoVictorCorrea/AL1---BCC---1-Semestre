#include <stdio.h>

int main(){
	
	float C, taxa, rendimento = 0, montante = 0;
	int anos, i;
	
	scanf("%f%f%d", &C, &taxa, &anos);
	
	anos = (anos * 12) / 3;
	
	montante = C;
	
	for(i = 0; i < anos; i++){
		rendimento = montante * taxa;
		montante += rendimento;
		
		printf("Rendimento: %.2f Montante: %.2f\n", rendimento, montante);
	}
	
	return 0;
}
