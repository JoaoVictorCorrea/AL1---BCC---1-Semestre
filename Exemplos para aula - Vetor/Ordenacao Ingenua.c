#include <stdio.h>

int main() {
    
    int v[10000], i, j, n, aux, menor;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    for(i = 0; i < n-1; i++){
        
        menor = i;
        
        for(j = i + 1; j < n; j++){
            
            if(v[j] < v[menor]){
                
                menor = j;
            }
        }
        
        if(menor != i){
            
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
    
    for(i = 0; i < n; i++){
        
        printf("[%d]", v[i]);
    }
    
    printf("\n");
    
    
	return 0;
}
