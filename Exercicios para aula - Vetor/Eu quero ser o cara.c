#include<stdio.h>

int main(){
	
	int quantNiveis, quantAmigos, quantPassados, i, j, nivel, total[1000] = {0}, menor;
	
	scanf("%d%d", &quantNiveis, &quantAmigos);
	
	for(i = 0; i < quantAmigos; i++){
		
		scanf("%d", &quantPassados);
			
			for(j = 0; j < quantPassados; j++){
				
				scanf("%d", &nivel);
				
				total[nivel-1]++;
			}	
	}
	
	for(i = 0; i < quantNiveis; i++){
		
		if(i == 0){
			menor = total[i];
		}
		else{
			if(total[i] < menor){
				menor = total[i];
			}
		}
	}
	
	printf("The %d friends could finish the game %d times\n", quantAmigos, menor);
	
	return 0;
}
