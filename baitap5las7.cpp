// Nhap mang n so nguyen , tim so duong nho nhat
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		printf("nhap pt arr[%d]=",i);
		scanf("%d",&arr[i]);
		
	}
	int minx = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			minx=arr[i];
		break;
		
	}
}
//minx la max cua danh sach
if(minx<=0){
	printf("mang toan so am\n");
}else{
	for(int i=0;i<n;i++){
		if(arr[i]>0&& arr[i]<minx){
		minx=arr[i];
}
}
printf("so duong nho nhat :%d\n",minx);
}
}
