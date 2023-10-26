#include<stdio.h>
int stack[100];
int minstack[1];
int top1=-1;
int top2=0;
void push(){
	int p;
	printf("enter the element to be pushed:");
	scanf("%d",&p);
	if(top1>=100-1){
		printf("stack is full ,cannot push\n");
	}
	else{
		stack[++top1]=p;
		minstack[top2]=stack[0];
		if (stack[top1]<minstack[0]){
		minstack[top2]=stack[top1];
		top1++;
	}
	
}
}
void display(){
	printf("the minimum element of stack is :\n");
	printf("%d\n",minstack[0]);
}
void main(){
	int n;
	while(1){
	printf("select the options below \n1)push\n2)display \n3)exit\n");
	scanf("%d",&n);
	if(n==1)
		push();
	else if(n==2)
		display();
	else if(n==3)
		break;
	else
		printf("enter a valid option");	
		
		}
	int o=0;
}
