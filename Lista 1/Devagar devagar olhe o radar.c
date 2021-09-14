#include <stdio.h>

int main(){
	
	float veloMax, veloCarro;
	
	scanf("%f%f", &veloMax, &veloCarro);
	
	if(veloCarro <= veloMax){
		printf("0.00\n");
		printf("0\n");
	}
	else{
		if(veloCarro <= (veloMax * 0.2) + veloMax){
			printf("85.13\n");
			printf("4\n");
		}
		else{
			if(veloCarro <= (veloMax * 0.5) + veloMax){
				printf("127.69\n");
				printf("5\n");
			}
			else{
				printf("574.62\n");
				printf("7\n");
			}
		}
	}
	
	return 0;
}
