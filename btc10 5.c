#include<stdio.h>
int main(){
	int arr[9];
	printf("nhap day so bat ky: ");
	scanf("%d", &arr[9]);
	int number,mid; 
	printf("nhap gia tri can tim: ");
	scanf("%d",&number);
	int start=0;
	int end = sizeof(arr)/sizeof(int);
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==number){
			printf("gia tri can tim o vi tri: %d",mid+1); 
			return 0; 
		} else if(arr[mid]>number){
			end =mid-1 ;
		} else{
			start =mid +1 ;
		} 
	} 
	printf("ko thay gia tri can tim"); 
	return 0; 
} 
