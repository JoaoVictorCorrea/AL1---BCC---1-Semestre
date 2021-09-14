#include<stdio.h>

const int MAX = 100;

int main(){
	
	int n;
	int i;
	int v1[MAX], v2[MAX];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v1[i]);
	}
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v2[i]);
	}
	
	for(i = 0; i < n; i++){
		
		printf("%d\n", v1[i]);
		printf("%d\n", v2[i]);
	}
	
	return 0;
}
