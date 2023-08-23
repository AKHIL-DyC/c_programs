#include<stdio.h>
void main(){
    int n,a,b,c,d,t;
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
    case 2:
        printf("enter the order of the matrix\n");
        scanf("%d\n%d",&a,&b);
        printf("enter the order of the matrix\n");
        scanf("%d\n%d",&c,&d);
        if(b!=c){
            printf("multiplication not possible");
        }
        else{
            printf("enter the first matrix\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                scanf("%d",&matA[i][j]);
            }
        }
            printf("enter the second matrix\n");
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                scanf("%d",&matB[i][j]);
            }
        }
             // Initialize matC to all zeros just giving mat[a][d] is not enough
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                matC[i][j] = 0;
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                for(int k=0;k<b;k++){
                    matC[i][j]+=matA[i][k]*matB[k][j];
                }
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                printf("%d\t",matC[i][j]);
            }
            printf("\n");
        }

        }

    default:
        break;
    }

}
