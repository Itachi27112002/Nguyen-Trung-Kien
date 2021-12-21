//tinh tong so nguyen cua 1 cac chu so nguyen n
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a=n;
	int s=0,d=0;
	for(n=0;n>0;n=n/10){
		d=n%10;
		s+=d;
	}
	printf("tong cac chu so cua%d  la:%d",a,s);
}
