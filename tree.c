#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*l;
    struct node*r;
};
struct node* create_node(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->l=NULL;
    newnode->r=NULL;
    return newnode;
}
struct node* insert_node(struct node* node,int data){
    if(node==NULL){
        return create_node(data);
    }
    else if(data<node->data){
        node->l=insert_node(node->l,data);
    }
    else{
        node->r=insert_node(node->r,data);
    }
    return node;
        
}
void preorder(struct node *node){
    if(node!=NULL){
        printf("%d",node->data);
        preorder(node->l);
        preorder(node->r);
    }
}
void inorder(struct node *node){
    if(node!=NULL){
        inorder(node->l);
        printf("%d",node->data);
        inorder(node->r);
    }
}
void postorder(struct node *node){
    if(node!=NULL){
        postorder(node->l);
        postorder(node->r);
        printf("%d",node->data);
    }
}
struct node* findmin(struct node* root){
    while(root->l!=NULL){
        root=root->l;
    }
    return root;
}
struct node* delete(struct node* root,int key){
    if(root==NULL){
        return root;
    }
    else if(root->data<key){
        root->r= delete(root->r,key);
    }
    else if(root->data>key){
        root->l= delete(root->l,key);
    }
    else{
        if(root->l==NULL){
            struct node*temp=root->r;
            free(root);
            return temp;
        }
        else if(root->r==NULL){
            struct node* temp=root->l;
            free(root);
            return temp;
        }

            struct node* temp=findmin(root->r);
            root->data=temp->data;
            root->r=delete(root->r,temp->data);
        

    }
    return root;
}
void main(){
struct node *root=NULL;
root=insert_node(root,5);
root=insert_node(root,3);
root=insert_node(root,8);
root=insert_node(root,1);
root=insert_node(root,4);
root=insert_node(root,9);

preorder(root);
printf("\n");
delete(root,3);
preorder(root);
printf("\n");
postorder(root);
}