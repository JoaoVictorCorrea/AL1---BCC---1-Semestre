#include<stdio.h>

int main(){
	
	float ind;
	
	scanf("%f", &ind);
	
	if(ind < 7){
		printf("Acida\n");
	}
	else{
		if(ind > 7){
			printf("Basica\n");
		}
		else{
			printf("Neutra\n");
		}
	}

	return 0;
}
