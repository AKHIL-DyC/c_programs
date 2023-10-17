#include<stdio.h>
void main(){
	int u1,u2,k;
	
	printf("enter the number of non zero element :\n");
	scanf("%d",&u1);
	int r[30][3];
	int t1[u1][3];
	printf("enter the first sparse matrix:");
	for(int i=0;i<u1;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&t1[i][j])
		}
	}
	
	
	printf("enter the number of non zero element of second matrix :\n");
	scanf("%d",&u2);
	int t2[u1][3];
	printf("enter the second sparse matrix:");
	for(int i=0;i<u1;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&t2[i][j])
		}
	}
	
	if(u1>u2){
	 k=u1;
	}
	else{
		k=u2;
	}
	
	for(int i=0;i<k;i++){
			if(t1[i][0]==t2[i][0]){
				if (t1[i][1]==t2[i][1]){
					r[i][0]=t1[i][0];
					r[i][1]=t1[i][1];
					r[i][2]=t1[i][2]+t2[i][2];
				}
				
				else{		
					
					
					
				}
			}
		
		
	}
	
	
}
