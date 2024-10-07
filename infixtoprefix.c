// stack using Array or Dynamic memory Allocation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
    int size;
    int top;
    char *data;
};

void printStack(struct stack *ptr, int size){
    for (int i = 0; i <= ptr->top; i++){
        printf("Element is : %d\n", ptr->data[i]);
    }
}
int isEmpty(struct stack *ptr){
    if (ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
void isFull(struct stack *ptr){
    if (ptr->top == ptr->size - 1){
        printf("The stack is Full.\n");
    }
    printf("The stack is not Full.\n");
}
void push(struct stack *ptr, int value){
    if (ptr->top == ptr->size - 1){
        printf("Stack-Overflow.");
    }
    else{
        ptr->top++;
        ptr->data[ptr->top] = value;
    }
}
int pop(struct stack *ptr){
    if (ptr->top == -1){
        printf("Stack-Underflow.");
    }
    else{
        int value = ptr->data[ptr->top];
        ptr->top--;
        return value;
    }
}
int stackTop(struct stack *sp){
    return sp->data[sp->top];
}
int stackBottom(struct stack *sp){
    return sp->data[0];
}

int precedence(char ch){
    if(ch =='/'){
        return 4;
    }else if(ch == '*'){
        return 3;
    }else if(ch =='+'){
        return 2;
    }else if(ch=='-'){
        return 1;
    } else{
        return 0;
    }
}

int isOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
        return 1;
    }else{
        return 0;
    }
}

char *infixToPostfix(char *infix)
{
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 50;
    sp->top = -1;
    sp->data = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0'){
        if (!isOperator(infix[i])){
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            if (precedence(infix[i]) > precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++;
            }else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j]= '\0';
    return postfix;
}

int main(){
    char *infix = "x-y/z-k*d";
    printf("postfix is %s",infixToPostfix(infix));

    return 0;
}