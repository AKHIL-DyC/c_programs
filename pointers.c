#include<stdio.h>
void main(){
int i=9;
int *p;
p=&i;
printf("%d\n",i);//9
printf("%d\n",&i);//address of i
printf("%d\n",p);//same address 
printf("%d\n",*p);//9
printf("%d\n",&p);//address of p(different from i)
*p=10;//*p gives the value of address,call by reference
printf("%d\n",i);
p=p+1;
printf("%d\n",p);//difference in address,value of 4 is increased(integer size=4byte)
*p=20;
printf("%d\n",i);//now value of i is not changable since now p is not pointing to i


int arr[4]={3,4,5,6};
int *k;
int *l;
k=&arr[1];
l=&arr[2];
//substracting pointers
printf("%d\t %d\n",l,*l-*k);
printf("%d\t %d\n",l-k,*l+*k);//l-k gave 1 which means adjacent elements in array are stored in +1 address eventhough its integer 
//printf("%d\t %d\n",l+k,*k*2);l+k,l*2 will not work like substraction
int *a=arr;//a points to first element
printf("%d\t %d\n",arr[1],*(a+1));
}