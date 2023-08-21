#include<stdio.h>
long int fact(int n){
    if(n==0||n==1){
    return 1;
    }
    else{
    int a=n*fact(n-1);
    return a;
}
}
void main(){
    int n,c,f=1,sum;
    printf("find dactorial using \n1.using recursion\n2.without using extraction \n");
    scanf("%d",&c);
    printf("enter the number ");
    scanf("%d",&n);
    switch(c)
    {
        case 1:
            f=fact(n);
            printf("the factorial using recursion is %d",f);
            break;
        case 2:
            if(n==0){
                printf("factorial is 1");
            }
            else
            {
            for(int i=1;i<=n;i++){
              f=f*i;
                }
            printf("the factorial using non recursive is %d",f);   
            break; 
            }
        default:
                printf("select either option  1 or 2");


    }

}