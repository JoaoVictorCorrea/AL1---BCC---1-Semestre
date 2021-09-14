#include<stdio.h>

int main(){
	
	int idvoo[37], vagas[37], i, idcliente, voo, cont = 0;
	
	for(i = 0; i < 37; i++){
		
		scanf("%d%d", &idvoo[i], &vagas[i]);
	}
	
	scanf("%d", &idcliente);
	
	while(idcliente != 9999){
		
		scanf("%d", &voo);
		
		cont = 0;
		
		for(i = 0; i < 37; i++){	
			
			if(voo == idvoo[i]){
				
				cont++;
				
				if(vagas[i] > 0){
					vagas[i]--;
					printf("%d\n", idcliente);
				}
				else{
					printf("INDISPONIVEL\n");
				}
			}
			else{
				if(i == 36 && cont == 0)
					printf("INDISPONIVEL\n");
			}
		}
		
		scanf("%d", &idcliente);
	}
	
	return 0;
}
