#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}list;

void traversal(struct Node *head);

struct Node *insertAtFirst(struct Node *head,int data){
    list *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    list *i = head->next;
    while (i->next != head){
        i = i->next;
    }
    // here iterator points the last node of circular linked list.
    i->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
};

int main(){
    list *head,*second,*third,*forth;

    // Allocate memory in dynamic memory (heap)
    head = (struct Node *) malloc(sizeof(struct  Node));
    second = (struct Node *) malloc(sizeof(struct  Node));
    third = (struct Node *) malloc(sizeof(struct  Node));
    forth = (struct Node *) malloc(sizeof(struct  Node));

    // linking nodes.
    head->data = 14;
    head->next = second;
    second->data = 28;
    second->next = third;
    third->data = 32;
    third->next = forth;
    forth->data = 42;
    forth->next = head;
    printf("Your Circular linked_List is :\n");
    // traversing
    traversal(head);
    printf("Your new Circular linked_List is :\n");
    head = insertAtFirst(head,41);
    traversal(head);

    return 0;
}

void traversal(struct Node *head){
    list *ptr = head;
    do{
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
    // printf("Element is : %d\n",ptr->data); // we need this line of code too if we uses while loop.
}