#include <stdio.h>

int main(){
	
	double r, area;
	
	scanf("%lf", &r);
	
	r = r/100;
	
	area = 3.14159 * (r * r);
	
	printf("Area = %.4lf\n", area);

	return 0;
}
