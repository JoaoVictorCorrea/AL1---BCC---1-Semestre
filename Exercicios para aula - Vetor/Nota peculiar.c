#include<stdio.h>

int main(){
	
	int n, notas[100], i, quantAmigos, nota;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &notas[i]);
	}
	
	if(n % 2 == 0){
		quantAmigos = n / 2;
		
		printf("%d\n", quantAmigos);
		
		for(i = 0; i < quantAmigos; i++){
			
			nota = notas[i] + notas[n- (1 + i)];
			printf("O amigo %d ficou com nota %d nessa prova.\n", i + 1, nota);
		}
	}
	else{
		quantAmigos = (n / 2) + 1;
		
		printf("%d\n", quantAmigos);
		
		for(i = 0; i < quantAmigos; i++){
			
			if(i == quantAmigos - 1){
				
				nota = notas[quantAmigos-1];
				printf("O amigo %d ficou com nota %d nessa prova.\n", i + 1, nota);
			}
			else{
				
				nota = notas[i] + notas[n- (1 + i)];
				printf("O amigo %d ficou com nota %d nessa prova.\n", i + 1, nota);
			}	
		}
	}
	
	return 0;
}
