#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *lchild, *rchild;
};
struct node *create_node(int data) {
struct node *newnode = (struct node *)malloc(sizeof(struct node));
newnode->data = data;
newnode->lchild = NULL;
newnode->rchild = NULL;
return newnode;
}
struct node *insert_node(struct node *node, int value) {
if (node == NULL)
return create_node(value);
else if (value < node->data) {
node->lchild = insert_node(node->lchild, value);
} else if (value >= node->data) {
node->rchild = insert_node(node->rchild, value);
}
return node;
}
struct node *find_min(struct node *node) {
while (node->lchild != NULL) {
node = node->lchild;
}
return node;
}
struct node *delete_node(struct node *root, int key) {
if (root == NULL)
return root;
if (key < root->data) {
root->lchild = delete_node(root->lchild, key);
} else if (key > root->data) {
root->rchild = delete_node(root->rchild, key);
} else {
if (root->lchild == NULL) {
struct node *temp = root->rchild;
free(root);
return temp;
} else if (root->rchild == NULL) {
struct node *temp = root->lchild;
free(root);
return temp;
}
struct node *temp = find_min(root->rchild);
root->data = temp->data;
root->rchild = delete_node(root->rchild, temp->data);
}
return root;
}
void preorder(struct node *node) {
if (node != NULL) {
printf("%d\t", node->data);
preorder(node->lchild);
preorder(node->rchild);
}
}
void inorder(struct node *node) {
if (node != NULL) {
inorder(node->lchild);
printf("%d\t", node->data);
inorder(node->rchild);
}
}
void postorder(struct node *node) {
if (node != NULL) {
postorder(node->lchild);
postorder(node->rchild);
printf("%d\t", node->data);
}
}
void display_menu() {
printf("\nMenu:\n");
printf("1. Insert Node\n");
printf("2. Delete Node\n");
printf("3. Inorder Traversal\n");
printf("4. Preorder Traversal\n");
printf("5. Postorder Traversal\n");
printf("6. Exit\n");
}
int main() {
struct node *root = NULL;
int choice, value;
display_menu();
do {
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter value to insert: ");
scanf("%d", &value);
root = insert_node(root, value);
break;
case 2:
printf("Enter value to delete: ");
scanf("%d", &value);
root = delete_node(root, value);
break;
case 3:
printf("Inorder Traversal:\n");
inorder(root);
break;
case 4:
printf("Preorder Traversal:\n");
preorder(root);
break;
case 5:
printf("Postorder Traversal:\n");
postorder(root);
break;
case 6:
printf("Exiting the program.\n");
break;
default:
printf("Invalid choice. Please enter a valid option.\n");
}
} while (choice != 7);
return 0;
}