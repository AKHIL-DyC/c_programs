#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* first=NULL;
struct node* newnode=NULL;
struct node* temp=NULL;
struct node* temp2=NULL;
int value,choice,element,count;

void nodeadd(){

	printf("enter the value of element");
	scanf("%d",&value);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->data=value;
	printf("where do you want to add the element:\n1)normal adding\n2)adding at left\n3)adding at right \n4)adding at particular position");
	scanf("%d",&choice);
	
	if(choice==1)
		{if (first==NULL){
			first=newnode;
		}
		else{
				temp=first;
				while(temp->next!=NULL){
				temp=temp->next;
				}
				temp->next=newnode;
				}
			
			}
		
	else if(choice==2){
			printf("before which element?");
			scanf("%d",&element);
			temp=first;
				if(first->data==element){
					temp=first;
					first=newnode;
					newnode->next=temp;
		
					}
	
				else   {
					while(temp->next->data!=element){
					temp=temp->next;
					}
					temp2=temp->next;
					temp->next=newnode;
					newnode->next=temp2;
	
     					  }
     				  
    		}
	else if(choice==3){
				printf("after which element?");
				scanf("%d",&element);
				temp=first;
				while(temp->data!=element){
					temp=temp->next;
					}
					temp2=temp->next;
					temp->next=newnode;
					newnode->next=temp2;

					}
	else if(choice==4){
				printf("enter the position at which you want to add the element:");
				scanf("%d",&value);
				temp=first;
				count=1;
				while(count!=value){
					temp2=temp;
					temp=temp->next;
				}
				temp2=newnode;
				newnode=temp;
				
				
	}				
}
			
		
void display(){
	if(first==NULL){
		printf("the list is empty");
	}
	else{
		temp=first;
		while(temp!=NULL){
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}
void main(){
	int mchoice;
	while(1){
		printf("enter the option you need:\n1)adding node\n2)deleting node");
		scanf("%d",mchoice)
		nodeadd();
		display();
	}
	}
