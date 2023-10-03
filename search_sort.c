#include<stdio.h>
void linear(int arr[],int size){
int search,flag=0;
printf("enter the element to be searched ");
scanf("%d",&search);
for(int i=0;i<size;i++){
if(arr[i]==search){
	printf("element found >_<");
	flag=flag++;
	break;}
}
if(flag==0){
	printf("element not found T_T");}
}


void selection(int arr[],int size){
	int i,j,min,temp;
	for(i=0;i<size-1;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
				temp=arr[j];
				arr[j]=arr[min];
				arr[min]=temp;
						}		
					}			
			
		}
				for(i=0;i<size;i++){
				printf("%d ",arr[i]);
				}
}



void bubble(int arr[],int size){
int temp;
for(int i=0;i<size;i++){
for(int j=0;j<size-i-1;j++){
	if(arr[j]>arr[j+1]){
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
			}
		}	
	}
for(int i=0;i<size;i++){
printf("%d",arr[i]);
}
}


void binary(int arr[],int size){
int first=0,flag=0,mid;
int search;
bubble(arr,size);
printf("enter the number to search");
scanf("%d",&search);
while(first<=size){
	mid=(first+size)/2;
	if(arr[mid]==search){
	flag=1;
	printf("element found >_<");
	break;}
	else if (arr[mid]>search)
	size=mid-1;
	else if(arr[mid]<search)
	size=mid+1;
}

if(flag==0){
printf("element not found T_T");}
}


void main(){
int option;
int arr[50];
int size;
printf("enter the size of the array\n");
scanf("%d",&size);
printf("enter the array\n");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
printf("select the option :\n1)Linear search\n2)Bubble sort\n3)Binary search\n4)Selection Sort\n");
scanf("%d",&option);
switch (option){
case 1:
	linear(arr,size);
	break;
case 2:
	bubble(arr,size);
	break;
case 3:
	binary(arr,size);
	break;				
case 4:
	selection(arr,size);
	break;	
default:printf("enter valid option");
	break;
}
}
