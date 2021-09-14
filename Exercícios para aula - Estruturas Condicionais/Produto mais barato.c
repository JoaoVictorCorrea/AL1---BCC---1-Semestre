#include<stdio.h>

int main(){
	
	float p1, p2, p3;
	
	scanf("%f%f%f", &p1, &p2, &p3);
	
	if(p1 < p2 && p1 < p3){
		printf("Primeiro produto\n");
	}
	else{
		if(p2 < p1 && p2 < p3){
			printf("Segundo produto\n");	
		}
		else{
			printf("Terceiro produto\n");
		}
	}
	
	return 0;
}
