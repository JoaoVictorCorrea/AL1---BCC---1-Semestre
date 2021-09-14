#include <stdio.h>

int main(){
	
	int n, vmultas = 0, casas = 0;
	float total;
	
	scanf("%d", &n);
	
	while(n != 999){
		
		if(n > 2){
			vmultas += n - 2;
			casas++;
		}
		
		scanf("%d", &n);
		
	}
	
	total = vmultas * 12.89;
	
	printf("%.2f\n%d\n", total, casas);
	
	return 0;
}
