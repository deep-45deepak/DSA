#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

void t_Forward(struct Node *ptr);
void t_Reverses(struct Node *ptr);


int main(){
    struct Node *head,*second,*third,*forth;
    // memory Allocating..
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));
    //  head
     head->data = 41;
     head->next = second;
     head->prev = NULL;
    // second
     second->data = 42;
     second->next = third; 
     second->prev = head;
    // third
     third->data = 43;
     third->next = forth;
     third->prev = second;
    // forth
     forth->data = 44;
     forth->next = NULL;
     forth->prev = third;

    printf("Doubly linked list forward \n");
    t_Forward(head);
    printf("Doubly linked list Reverse \n");
    t_Reverse(forth);
    return 0;
}

void t_Forward(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

void t_Reverse(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->prev;
    }
}