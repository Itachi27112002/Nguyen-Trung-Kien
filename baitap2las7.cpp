#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	int i,count=0;
	float s=0;
	for(i=0;i<0;i++){
		printf("nhap arr[%d]\t",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2!=0&&i%2==0){
		count++;
		s+=arr[i];
		
	}
}
if(count==0){
	printf("mang khong co so le");
}else{
	printf("trung binh cong cua cac so le o vi tri chan trong mang la:%f",s/count);
}
}
