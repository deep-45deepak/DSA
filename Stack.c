// stack using Array or Dynamic memory Allocation

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    int *data;
};

void printStack(struct stack *ptr,int size){
    for (int i = 0; i <= ptr->top; i++){
        printf("Element is : %d\n",ptr->data[i]);
    }
}
void isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        printf("The stack is Empty.\n");
    }
    else{
        printf("The stack is not Empty.\n");
    }
}
void isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        printf("The stack is Full.\n");
    }
    printf("The stack is not Full.\n");
}
void push(struct stack *ptr,int value){
    if(ptr->top==ptr->size-1){
        printf("Stack-Overflow.");
    }else{ptr->top++;
    ptr->data[ptr->top] = value;}
}
void pop(struct stack *ptr){
    if(ptr->top==-1){
        printf("Stack-Underflow.");
    }else{int vague = ptr->data[ptr->top];
    ptr->top--;}
}
int peek(struct stack *ptr,int i){
    if(ptr->top-i+1){
        printf("Invalid input");
    }else{
        return ptr->data[ptr->top-i+1];
    }
}
int stackTop(struct stack* sp){
    return sp->data[sp->top];
}
int stackBottom(struct stack* sp){
    return sp->data[0];
}
int main(){
    struct stack *s;
    s->size = 20;
    s->top = -1;
    s->data = (int*)malloc(s->size * sizeof(int));
    s->data[0] = 41;
    s->top++;
    s->data[1] = 45;
    s->top++;
    push(s,48);
    push(s,51);
    printf("Stack element are :\n");
    isFull(s);
    isEmpty(s);
    printStack(s,s->size);
    pop(s);
    printf("Stack element are :\n");
    printStack(s,s->size);
    printf("After using peek operation.\n");
printf("stack top is : %d\n",stackTop(s));
printf("stack bottom is : %d",stackBottom(s));
    // printf("%d\n",peek(s,1));
    // printf("%d\n",peek(s,2));
    // printf("%d\n",peek(s,3));
    // printf("%d\n",peek(s,4));
    return 0;
}

// Stack using the approach used in college.

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void push();
// void pop();
// void traverse();
// int Array[5];
// int top = -1;
// int main(){
//     int choice;
//     char ch;
//     do{
//         printf("Enter 1 to push\n");
//         printf("Enter 2 to pop\n");
//         printf("Enter 3 to traverse\n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             push();
//             break;
//             case 2:
//             pop();
//             break;
//             case 3:
//             traverse();
//             break;
//             default :
//             printf("You entered a wrong choice.\n");
//         }
//         printf("Do you want to continue. press 'Y' and 'y' to confirm.\n");
//         fflush(stdin);
//         scanf("%c",&ch);
//     } while(ch == 'Y' || ch == 'y');
//     return 0;
// }
// void push(){
//     int val;
//     if(top>4){
//         printf("Stack Over-flow.\n");
//     }else{
//         printf("Enter the number to insert.\n");
//         scanf("%d",&val);
//         top++;
//         Array[top]=val;
//     }
// }
// void pop(){
//     int val;
//     if(top<0){
//         printf("Stack Under-flow\n");
//     }else{
//         val=Array[top];
//         top--;
//         printf("Deleted value is : %d\n",val);
//     }
// }
// void traverse(){
//     int i;
//     if(top==-1){
//         printf("Stack Empty\n");
//     }else{
//         printf("Display Stack\n");
//         for(i=top; i>=0; i--){
//             printf("%d\n",Array[i]);
//         }
//     }
// }

//  stack using linked list. And dynamic memory allocation.

// #include<stdio.h>
// #include<stdlib.h>

// struct stack{
//     int data;
//     struct stack *next;
// };

// void traversal(struct stack *ptr){
//     while(ptr!=NULL){
//         printf("Element is : %d\n",ptr->data);
//         ptr = ptr->next;
//     }
// }

// int isFull(struct stack *top){
//     struct stack *p = (struct stack*)malloc(sizeof(struct stack));
//     if(p == NULL){
//         return 1;
//     }
//     return 0;

// }

// int isEmpty(struct stack *top){
//     if(top==NULL){
//         return 1;
//     }
//     return 0;
// }

// struct stack* push(struct stack *top,int val){
//     if(isFull(top)){
//         printf("Stack Overflow");
//     }else{
//         struct stack *new = (struct stack*)malloc(sizeof(struct stack));
//         new->data = val;
//         new->next = top;
//         top = new;
//         return top;
//     }
// }

// struct stack * pop(struct stack *ptr){
//     if(isEmpty(ptr)){
//         printf("Stack Underflow.");
//     }else{
//         printf("Deleted value is : %d\n",ptr->data);
//         struct stack* newAdd = ptr->next;
//         free(ptr);
//         return newAdd;
//     }
// }
// int peek(struct stack *ptr){

// }

// int main(){
//     struct stack *top = NULL;
//     printf("Stack is created.\n");
//     top = push(top,45);
//     top = push(top,55);
//     top = push(top,65);
//     traversal(top);
//     traversal(top);
//     // traversal(pop(top)); // work the same..
//     return 0;
// }

// Implementation of postfix and infix expression


