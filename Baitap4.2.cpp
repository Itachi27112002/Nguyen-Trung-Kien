#include<stdio.h>
int main(){
	int n=0,count=1;
	
	while(count<100){
		n+=count;
		count+=2;
	}
	printf("tong so le nho hon 100 la: %d",n);
}
