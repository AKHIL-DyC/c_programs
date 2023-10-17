#include<stdio.h>
void main(){
	int r,c,flag;
	printf("enter the number of rows of matrix:");
	scanf("%d",&r);
	printf("enter the number of columns of matrix:");
	scanf("%d",&c);
	int arr[r][c];
		int trip[30][3];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		printf("\n");
		printf("the matrix is \n");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
			
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					if(arr[i][j]!=0){
						trip[flag+1][0]=i;
						trip[flag+1][1]=j;
						trip[flag+1][2]=arr[i][j];
						flag=flag+1;
						}
				}
			}
			
	 trip[0][0]=r;
	 trip[0][1]=c;
	 trip[0][2]=flag;
	float sparcity=(((float)(r*c)-(float)flag)/(float)(r*c));
	
	printf("the matrix in triplet form is \n");
	printf("\n");
	for(int i=0;i<flag+1;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",trip[i][j]);
		}
		printf("\n");
	}
	printf("the sparcity is :%f\n",sparcity);
			
	
	
}
