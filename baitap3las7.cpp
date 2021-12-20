//nhap 1 mang n so nguyen , sau do nhap 1 so x. Tim xem co x trong mang ko.
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap pt arr[%d]=",i);
		scanf("%d",&arr[i]);
		
	}
	int x;
	printf("nhap so can tim");
	scanf("%d",&x);
	int flag=0;
	for(int i=0;i<n;i++){
		if (arr[i]==x){
		printf("%d nam trong mang\n",x);
		flag=1;
		break;
		
	}
}
if(flag=0){
	printf("%d khong nam trong danh sach\n",x);
}
}
