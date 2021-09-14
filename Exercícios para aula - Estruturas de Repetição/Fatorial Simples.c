#include<stdio.h>

int main(){
	
	int n, i;
	long long int total = 1; 
	
	scanf("%d", &n);
	
	for(i = n; i > 1; i--){
		total = total * i;
	}
	
	printf("%lli\n", total);
	
	return 0;
}
