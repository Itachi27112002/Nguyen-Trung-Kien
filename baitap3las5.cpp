#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	if(n<0){
		printf("so phai tim:0");
		
	}else
		if(n<=2){
		printf("so phai tim:1");
		
	}else
	if(n<=3){
		printf("so phai tim:2");
	}else{
	int x1=1,x2=1,x3=2;
		for(int i=4;x2+x3<n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("so phai tim:%d\n",x3);
}
}
