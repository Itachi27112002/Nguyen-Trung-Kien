#include <stdio.h>
int main(){
	int tk = 4000;
	int ls = 8;
	int n =1;
	for(n;n <= 4; n++){
		
		tk = tk + tk*ls/100;
		 
	}
	printf("so tien sau 4 nam : %d", tk);
	
}

