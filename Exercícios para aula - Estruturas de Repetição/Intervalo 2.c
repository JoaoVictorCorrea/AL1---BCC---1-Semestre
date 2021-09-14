#include <stdio.h>

int main(){
	
	int n, i, num, contDentro = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &num);
		
		if(num >= 10 && num <= 20){
			contDentro++;
		}
	}
	
	printf("%d in\n%d out\n", contDentro, n - contDentro);
	
	return 0;
}
