#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* newnode=NULL;
struct node* temp=NULL;
struct node* front=NULL;
struct node* rear=NULL;
int n,v;
void create_node(){
	printf("enter the value");
	scanf("%d",&v);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=v;
	newnode->next=NULL;
	
}
void display(){
	if(front==NULL){
		printf("queue is empty\n");
	}
	temp=front;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void enqueue(){
	create_node();
	if(rear==NULL){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
	display();
}
void dequeue(){
	if(front==NULL){
		printf("queue is empty");
	}
	else if(front==rear){
		temp=front;
		front=NULL;
		rear=NULL;
		free(temp);
	}
	else{
		temp=front;
		front=temp->next;
		free(temp);
	}
	display();
}
void main(){
	while(1){
		printf("choose from below option \n1)enqueue\n2)dequeue");
		scanf("%d",&n);
		if(n==1){
			enqueue();
		}
		if(n==2){
			dequeue();
		}
	}
}

