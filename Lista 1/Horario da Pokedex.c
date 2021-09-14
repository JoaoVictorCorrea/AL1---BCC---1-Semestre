#include <stdio.h>

int main(){
	
	int h, m;
	
	scanf("%d%d", &h, &m);
	
	if(h >= 12){
		h = h - 12;
		
		if(h == 00){
			h = 12;
			printf("%02d\n", h);
			printf("%02d\n", m);
			printf("pm\n");	
		}
		else{
			printf("%02d\n", h);
			printf("%02d\n", m);
			printf("pm\n");
		}	
	}
	else{
		if(h == 00){
			h = 12;
			printf("%02d\n", h);
			printf("%02d\n", m);
			printf("am\n");	
		}
		else{
			h = 12 - (12 - h);
			printf("%02d\n", h);
			printf("%02d\n", m);
			printf("am\n");
		}
	}

	return 0;
}
