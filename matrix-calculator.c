#include<stdio.h>
void main(){
    int n,a,b;
    int matA[5][5];
    int matB[5][5];
    int matC[5][5];
    printf("1.Matrix addition  2.Matrix multiplication\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("enter the order of the matrix\n");
        scanf("%d %d",&a,&b);
        matA[a][b];
        matB[a][b];
        matC[a][b];
        printf("enter matrix A\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                scanf("%d",&matA[i][j]);
            }
        }
        printf("enter matrix B\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                scanf("%d",&matB[i][j]);
            }
        }
        for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            matC[i][j]=matA[i][j]+matB[i][j];
        }
        }
        printf("the sum is \n");
         for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("%d\t",matC[i][j]);
            }
            printf("\n");
        }
        break;
    
    default:
        break;
    }

}
