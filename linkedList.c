#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}list;


void traversal(struct Node *ptr);


struct Node *insertAtBeg(struct Node *head,int data){
    list *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
};

struct Node *insetAtIndex(struct Node *head, int data, int index){
    list *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *beg = head;
    int i=0;
    while(i!=index-1){
        beg = beg->next;
        i++;
    }
    ptr->data = data;
    ptr->next = beg->next;
    beg->next = ptr;
    return head;
};


struct Node *insertAtEnd(struct Node *head, int data){
    list *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *end = head;
    while(end->next != NULL){
        end = end->next;
    }
    ptr->next = end->next;
    end->next = ptr;
    return head;
};

// this function can be done by same approach as mentioned above.
void insertAfterNode(struct Node *prevNode, int data){
    list *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
}


            //  Deletion in a linked_list.
// deletion at beginning
 struct Node *deleteAtBeg(struct Node *head){
    list *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
 };

//  deletion at any index.
 struct Node *deleteAtIndex(struct Node *head, int index){
    list *ptr1 = head;
    list *ptr2 = head->next;
    for (int i = 0; i <index-1; i++){
     ptr1 = ptr1->next;
     ptr2 = ptr2->next;
    }
    ptr1->next = ptr2->next;
    free(ptr2);
    return head;
 };

// delete at end.
 struct Node *deleteAtEnd(struct Node *head){
    list *ptr1 = head;
    list *ptr2 = head->next;
    while(ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    ptr1->next = NULL;
    free(ptr2);
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
    forth->next = NULL;

    // Traversal across linked_list
    // traversal(head);
    // insertion
    // head = insertAtBeg(head,7);
    // // traversal
    // printf("New Linked_list is : \n");
    // traversal(head);
    // // Again adding at beginning
    // head = insertAtBeg(head,8);
    // printf("Another new Linked_list is : \n");
    // traversal(head);

    // Insertion between indices
    // printf("New linked_list is :\n");
    // head = insetAtIndex(head,56,3);
    // traversal(head);

    // Insertion at end 
    // printf("New linked_list is :\n");
    // head = insertAtEnd(head,56);
    // traversal(head);

    // insertion after node.
    // printf("New linked_list is :\n");
    // insertAfterNode(second,2); 
    // traversal(head);
    

    // Deletion in a linked_list .

    // deletion at beginning.

    // printf("Your list is  : \n");
    // traversal(head);
    // head = deleteAtBeg(head);
    // printf("New Linked_list is : \n");
    // traversal(head);

    printf("Your list is : \n");
    traversal(head);
    head = deleteAtEnd(head);
    printf("New Linked_list is : \n");
    traversal(head);

    return 0;
}



void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->next;
    }
}
