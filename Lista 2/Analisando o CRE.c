#include <stdio.h>

int main(){
	
	float CRE, media, menor, soma = 0;
	int cont = 0, cond = 0, matricula, menorMatricula;
	
	while(cond == 0){
		
		scanf("%d", &matricula);
		
		if(matricula == 999){
			cond = 1;
		}
		else{
			scanf("%f", &CRE);
			soma += CRE;
			cont++;
			
			if(cont == 1){
				menor = CRE;
				menorMatricula = matricula;
			}
			else{
				if(CRE < menor){
					menor = CRE;
					menorMatricula = matricula;
				}
			}
		}
	}
	
	media = soma / cont;
	
	printf("%d\n%.2f", menorMatricula, media);
	
	return 0;
}
