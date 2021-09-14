#include<stdio.h>

int main(){
	
	int interface, IA, encapsulamento, identacao, structs, requisito;
	
	scanf("%d%d%d%d%d", &interface, &IA, &encapsulamento, &identacao, &structs);
	
	if(interface == 1 || IA == 1){
		requisito++;
	}
	
	if(encapsulamento == 1 && identacao == 1){
		requisito++;
	}
	
	if(structs == 1){
		requisito++;
	}
	
	if(requisito == 3){
		printf("AVALIADO\n");
	}
	else{
		printf("0");
	}

	return 0;
}
