#include<stdio.h>
typedef struct{
    int exp;
    int coeff;
}p;
p p1[50],p2[50],res[100];
void readpoly(p a[],int n){
    printf("enter the coeff follwed by exponential");
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i].coeff,&a[i].exp);
    }
}
void printpoly(p a[],int n){
    for(int i=0;i<n;i++){
        printf("%dx^%d\t+\t",a[i].coeff,a[i].exp);
    }
}
int addpoly(p p1[],p p2[],int n,int m){
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m){
        if(p1[i].exp>p2[j].exp){
            res[k]=p2[j];
            k++;
            j++;
        }
        else if(p1[i].exp==p2[j].exp){
            res[k].exp=p1[i].exp;
            res[k].coeff=p1[i].coeff+p2[j].coeff;
            k++;
            i++;
            j++;
        }
        else if(p1[i].exp<p2[j].exp){
            res[k]=p1[i];
            k++;
            i++;
        }
    }
    while (i<n)
    {
        res[k]=p1[i];
        k++;
        i++;
    }
    while(j<m){
        res[k]=p2[j];
        k++;
        j++;
    }
  return k;  
}
void main(){
    int n,m;
    printf("enter the number of terms in polynomial 1 and 2 ");
    scanf("%d %d",&n,&m);
    readpoly(p1,n);
    readpoly(p2,m);
    printpoly(p1,n);
    printf("\n");
    printpoly(p2,m);
    printf("\n");
    int p=addpoly(p1,p2,n,m);
    //printf("%d",p);
    printpoly(res,p);
}
