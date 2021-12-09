#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri n=");
	scanf("%d",&n);
	int i=0;
	
	if(n>0){
		while(i<=n){
			printf("So chan la :%d\n",i);
			i+=1;
			
		}
	}else{
		printf("Error");

	
	}
}
