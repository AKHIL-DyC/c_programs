#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* newnode=NULL;
struct node* temp=NULL;
struct node* top=NULL;
int n,v;
void create_node(){
	printf("enter the value");
	scanf("%d",&v);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=v;
	newnode->next=NULL;
	
}
void display(){
	temp=top;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void push(){
	create_node();
	if (top==NULL){
		top=newnode;
	}
	else{
		newnode->next=top;
		top=newnode;
	}
	display();
}
void pop(){
	if(top==NULL){
		printf("stack is empty");
	}
	else{
		temp=top;
		top=top->next;
	}
	free(temp);
	display();
}
void peek(){
	if(top==NULL){
		printf("stack is empty");	
	}
	else{
		printf("%d",top->data);
	}
}
void main(){
	while(1){
	printf("\nenter your choice \n1)push\n2)pop\n3)peek");
	scanf("%d",&n);
		if(n==1){
			push();
			
		}
		if(n==2){
			pop();
			
		}
		if(n==3){
			peek();
		}
	}
}
