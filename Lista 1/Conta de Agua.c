#include<stdio.h>

int main(){
	
	int consumo, total;
	
	scanf("%d", &consumo);
	
	total = 7;
	
	if(consumo > 10 && consumo <= 30){
		total += 1 * (consumo - 10);
	}
	else{
		if(consumo > 30 && consumo <= 100){
			total += 20 + 2 * (consumo - 30);	
		}
		else{
			if(consumo > 100){
				total += 160 + 5 * (consumo - 100);
			}
		}
	}
	
	printf("%d\n", total);
	
	
	return 0;
}
