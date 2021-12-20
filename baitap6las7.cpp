// Nhap mang n so nguyen tim so luong cac so  duong lien tiep nhieu nhat
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
		
	}
	int count=0,max=0;
	for(int i=0;i<0;i++){
		if(arr[i]>0){
		count++;
		if(count>max){
		max=count;
	}
	
}else{
	count=0;
}
}
printf("so luong cac so luong lien tiep nhieu nhat:%d\n",max);
}
