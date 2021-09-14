#include <stdio.h>

int main(){
	
	int dias, km;
	double total;
	
	scanf("%d%d", &dias, &km);
	
	total = (dias * 30) + (km * 0.01);
	total -= total * 0.1;
	
	printf("%lf\n", total);
	
	printf("%.2lf\n", total);

	return 0;
}
