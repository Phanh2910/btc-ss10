#include<stdio.h>
int main(){
    int arr[5] = {3,5,1,2,6};
    printf("mang ban dau la: \n");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]); 
	} 
    for (int i = 0; i < 5; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    printf("\n"); 
    printf("mang sau khi da sap xep la: \n"); 
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
	return 0;
}

