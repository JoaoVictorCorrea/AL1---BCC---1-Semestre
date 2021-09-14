#include<stdio.h>

int main(){
	
	int cod, quant;
	float total;
	
	scanf("%d%d", &cod, &quant);
	
	switch(cod){
		case 1:
			total = quant * 5.3;
			break;
		
		case 2:
			total = quant * 6;
			break;
			
		case 3:
			total = quant * 3.2;
			break;
		
		case 4:
			total = quant * 2.5;
			break;
	}
	
	if(quant >= 15 || total >= 40){
		total = total - (total * 0.15);
	}
	
	printf("R$ %.2f\n", total);
	
	return 0;
}
