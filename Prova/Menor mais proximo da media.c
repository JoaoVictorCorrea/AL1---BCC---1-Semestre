#include <stdio.h>

int main() {
    
    int n, i, soma = 0, menor;
    int v[100];
    double media;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
		soma += v[i];
	}
	
	media = (double)soma / n;
	
	printf("%.2lf\n", media);
	
	menor = v[0];
	
	for(i = 0; i < n; i++){
		
		if(v[i] < media && v[i] > menor)
			menor = v[i];
	}
	
	if(menor != media){
		
		printf("%d\n", menor);
	}
	else{
		printf("Inexistente\n");
	}
	
	return 0;
}
