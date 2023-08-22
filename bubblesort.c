#include<stdio.h>
printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
bubblesort(int *arr,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;  
            }
        }
    }
    
}
bubblesort_v2(int *arr,int n){
     int temp;
     int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;  
              flag=1;
            }
        }
        if(flag){
            printf("using bubblesort_v2");
            return 0;
        }
    }
}
void main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printarr(arr,n);
    printf("\n");
    bubblesort(arr,n);
    printarr(arr,n);
    bubblesort_v2(arr,n);
}