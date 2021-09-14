#include <stdio.h>

int main() {
    long long int n;
    scanf("%lli", &n);
    
    if(n == 0){
        printf("NULO\n");
    }
    else{
        if(n > 0){
            if(n % 2 == 0){
                printf("POSITIVO PAR\n");
            }
            else{
                printf("POSITIVO IMPAR\n");
            }
        }
        else{
            if(n % 2 == 0){
                printf("NEGATIVO PAR\n");
            }
            else{
                printf("NEGATIVO IMPAR\n");
            }
        }
    }
    
	return 0;
}
