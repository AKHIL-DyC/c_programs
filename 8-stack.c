#include<stdio.h>
int top=-1;
int stack[100];
void print(){
	printf("The stack now is :\n");
	for(int i=0;i<top+1;i++){
		printf("%d\t",stack[i]);
	}
	printf("/n");
}

void push(){
	int p;
	int k=top;
	printf("enter the element to be pushed:");
	scanf("%d",&p);
	if(k>=100-1){
		printf("stack is full ,cannot push\n");
	}
	else{
		stack[++k]=p;
		top++;
	}
	print();
	
}

void pop(){
	int p;
	if(top<0){
		printf("stack is empty cannot pop\n");
	}
	else{
		top--;
	}
	print();
	
}
void peak(){
	if(top<0){
		printf("stack empty");
	}
	else{
		printf("%d\n",stack[top]);
	}
}
void main(){
	int n;
	while(1){
	printf("select the options below \n1)push\n2)pop\n3)peak\n4)exit");
	scanf("%d",&n);
	if(n==1)
		push();
	else if(n==2)
		pop();
	else if(n==3)
		peak();
	else if(n==4)
		exit;	
	else
		printf("enter a valid option");	
		
		}
}
