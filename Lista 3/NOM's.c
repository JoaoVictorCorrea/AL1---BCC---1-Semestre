#include<stdio.h>

int const MAX = 100;

int main(){
	
	int n, i;
	double somaN = 0.0, somaP = 0.0, media;
	double v1[MAX], v2[MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%lf", &v1[i]);
		
	}
	
	media = 0.0;
	
	for(i = 0; i < n; i++){
		
		scanf("%lf", &v2[i]);
		somaN += v1[i] * v2[i];
		somaP += v2[i];
	}
	
	media = somaN / somaP;
	
	printf("%.2lf\n", media);
	
	return 0;
}
