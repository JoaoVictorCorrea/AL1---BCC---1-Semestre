#include<stdio.h>

int const MAX = 20;

int main(){
	
	int i, menor, maior;
	int v[MAX];
	double media;
	
	for(i = 0; i < MAX; i++){
		
		scanf("%d", &v[i]);
	}
	
	menor = v[0];
	maior = v[0];
	
	for(i = 1; i < MAX; i++){
		
		if(v[i] > maior)
			maior = v[i];
			
		if(v[i] < menor)
			menor = v[i];
	}
	
	media = (double) (maior + menor) / 2;
	
	printf("media: %.2lf\n", media);
	
	for(i = 0; i < MAX; i++){
		
		if(v[i] > media)
			printf("%d\n", v[i]);
	}
	
	return 0;
}
