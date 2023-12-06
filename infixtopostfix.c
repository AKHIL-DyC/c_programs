#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isoperator(char a){
    return(a=='+'||a=='-'||a=='/'||a=='*'||a=='^');

}
int getprecedence(char a){
    switch (a)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
     case '^':
        return 3;    
    default:
        return 0;
    }
}
void infixtopostfix(char inf[],char post[]){
        printf("calculating...\n");
        char stack[30];
        int top=-1;
        int i,j;
        for( i=0,j=0;inf[i]!='\0';i++){
            if(isdigit(inf[i])||isalpha(inf[i])){
                post[j++]=inf[i];
            }
            else if(isoperator(inf[i])){
                    while(top>=0 && getprecedence(stack[top])>=getprecedence(inf[i])){
                        post[j++]=stack[top--];
                    }
                     stack[++top]=inf[i];
            }
            else if(inf[i]=='('){
                stack[++top]=inf[i];
            }
            else if(inf[i]==')'){
                 while (top >= 0 && stack[top] != '(') {
                post[j++] = stack[top--];
            }
            // Pop the opening parenthesis from the stack
            top--;
            }
        }
         while (top >= 0) {
        post[j++] = stack[top--];
    }

    // Null-terminate the postfix expression
    post[j] = '\0';
}


int main(){
    char infix[30];
    char postfix[30];
    printf("Enter an infix expression: ");
    fgets(infix, 30, stdin);
     printf("infix expression: %s\n", infix);
    infixtopostfix(infix,postfix);
     printf("Postfix expression: %s\n", postfix);
     return 0;
}