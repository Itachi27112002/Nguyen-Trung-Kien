#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	int a=n;
	int d=0,snd=0;
	if(n>=0){
		for (;n>0;n=n/10){
		d=n%10;
		snd=snd*10+d;
	}
	printf("so nghich dao cua %d la: %d",a,snd);
}else{
	int b=-n;
	for(;b>0;b=b/10){
		d=b%10;
		snd=snd&10+d;
	}
	printf("so nghich dao cua %d la:-%d",a,snd);
}
}

