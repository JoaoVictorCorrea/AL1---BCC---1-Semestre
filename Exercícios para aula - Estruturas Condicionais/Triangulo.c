#include<stdio.h>

int main(){
	
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	
	if((a+b) > c && (b+c) > a && (c+a) > b){
		
		if((a==b) && (b==a)){
			printf("Equilatero\n");
		}
		else{
			if((a==b) || (b==c) || (a==c)){
				printf("Isosceles\n");
			}
			else{
				printf("Escaleno\n");
			}
		}
	}
	else{
		printf("Nao eh triangulo\n");
	}
	
	return 0;
}
