// Nhap mang n so nguyen, tim so le cuoi cung cua mang
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
	printf("nhap pt arr[%d]",i);
	scanf("%d",&arr[i]);
	
}
int a=0;
for(int i=0;i<n;i++){
	if(arr[i]%2!=0){
		a=arr[i];
	}
}
if(a==0){
	printf("mang khong co so le");
	
}else{
	printf("so le cuoi cung cua mang la:%d",a);\
}
}
