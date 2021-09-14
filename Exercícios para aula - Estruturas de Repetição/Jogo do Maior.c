#include <stdio.h>

int main(){
	
	int n, a, b, pont1, pont2, i;
	
	scanf("%d", &n);
	
	while(n != 0){
		
		pont1 = 0;
		pont2 = 0;
		
		for(i = 0; i < n; i++){
			scanf("%d%d", &a, &b);
		
			if(a > b)
				pont1++;
			else{
				if(b > a)
					pont2++;
				}
		}
		
		printf("%d %d\n", pont1, pont2);
		
		scanf("%d", &n);
		
	}
	
	return 0;
}
