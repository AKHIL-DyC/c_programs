#include<stdio.h>
#define max 5
int q[max];
int rear=-1;
int front=-1;
int item;
void enque(){		
			printf("enter the number to be enqued ");
			scanf("%d",&item);
			if(rear==max-1){
				printf("queue full ");
			}
			else if(front==-1&&rear==-1){
				front=0;
				q[++rear]=item;
			}
			else{
				q[++rear]=item;
			}
	}
void print(){
			for(int i=front;i<rear+1;i++){
			printf("%d \t",q[i]);
			}
}

void deque(){
			
			if(front==-1){
			printf("queue is empty");
			}
			else{
				item=q[front];
				if(front==rear){
				front=-1;
				rear=-1;
			}
			else{
				front=front+1;
			}
			
			
			}
			
}	
void main(){
int c;
do{
 printf("\t enter your choice \n1)enque\n2)dequeue\n3)print");
 scanf("%d",&c);
 	if(c==1){
 	enque();
 	}
 	if(c==2){
 	deque();
 	}
 	if(c==3){
 	print();
 	}
 }
 while(c!=4);
 
}
