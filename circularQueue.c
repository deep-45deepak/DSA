// // C program for array implementation of queue
// #include <limits.h>
// #include <stdio.h>
// #include <stdlib.h>

// // A structure to represent a queue
// struct Queue
// {
//     int front, rear, size;
//     unsigned capacity;
//     int *array;
// };

// // function to create a queue
// // of given capacity.
// // It initializes size of queue as 0
// struct Queue *createQueue(unsigned capacity)
// {
//     struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
//     queue->capacity = capacity;
//     queue->front = queue->size = 0;

//     // This is important, see the enqueue
//     queue->rear = capacity - 1;
//     queue->array = (int *)malloc(queue->capacity * sizeof(int));
//     return queue;
// }

// // Queue is full when size becomes
// // equal to the capacity
// int isFull(struct Queue *queue)
// {
//     return (queue->size == queue->capacity);
// }

// // Queue is empty when size is 0
// int isEmpty(struct Queue *queue)
// {
//     return (queue->size == 0);
// }

// // size of the queue
// int qSize(struct Queue *queue){
//     return queue->size;
// }


// // Function to add an item to the queue.
// // It changes rear and size
// void enqueue(struct Queue *queue, int item)
// {
//     if (isFull(queue)){
//         printf("Queue Overflow\n");
//         // return;
//     }
//     queue->rear = (queue->rear + 1) % queue->capacity;
//     queue->array[queue->rear] = item;
//     queue->size = queue->size + 1;
//     printf("%d enqueued to queue\n", item);
// }

// // Function to remove an item from queue.
// // It changes front and size
// int dequeue(struct Queue *queue)
// {
//     if (isEmpty(queue)){
//         printf("Queue Underflow\n");
//         return INT_MIN;
//     }
//     int item = queue->array[queue->front];
//     queue->front = (queue->front + 1) % queue->capacity;
//     queue->size = queue->size - 1;
//     return item;
// }

// // Function to get front of queue
// int front(struct Queue *queue)
// {
//     if (isEmpty(queue))
//         return INT_MIN;
//     return queue->array[queue->front];
// }

// // Function to get rear of queue
// int rear(struct Queue *queue)
// {
//     if (isEmpty(queue))
//         return INT_MIN;
//     return queue->array[queue->rear];
// }

// // Driver program to test above functions.
// int main()
// {
//     struct Queue *queue = createQueue(6);

//     enqueue(queue, 10);
//     enqueue(queue, 20);
//     enqueue(queue, 30);
//     enqueue(queue, 40);
//     // enqueue(queue, 50);
//     // enqueue(queue, 60);
//     // enqueue(queue, 70);

//     printf("%d dequeued from queue\n\n",dequeue(queue));
//     // printf("%d dequeued from queue\n\n",dequeue(queue));
//     enqueue(queue, 70);

//     printf("Front item is %d\n", front(queue));
//     printf("Rear item is %d\n", rear(queue));
//     printf("Size of the Queue is %d\n", qSize(queue));

//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>

// struct Queue {
//     int front , rear , size;
//     unsigned capacity;
//     int *data;
// };

// struct Queue *createQueue(unsigned capacity){
//     struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
//     queue->front = queue->rear = -1;
//     queue->size = 0;
//     queue->data = (int*)malloc(queue->capacity*sizeof(int));
//     return queue;
// }

// int isFull(struct Queue *queue){
//     return (queue->rear == queue->capacity);
// }

// int isEmpty(struct Queue *queue){
//     return (queue->size == queue->capacity-1);
// }

// void enqueue(struct Queue *queue, int item){
//     if(isFull(queue)){
//         printf("Queue Overflow");
//         return NULL;
//     }
//     else{
//         if(queue->front== queue->rear){
//         queue->front += 1;
//         queue->rear += 1;
//         queue->data[queue->rear] = item;
//         queue->size += 1;
//         printf("\n%d is enqueued in the Queue.\n",queue->data[queue->rear]);
//         }
//         else{
//         queue->rear += 1;
//         queue->data[queue->rear] = item;
//         queue->size += 1;
//         printf("\n%d is enqueued in the Queue.\n",queue->data[queue->rear]);
//     }
//     }
// }

// int dequeue(struct Queue *queue){
//     if(isEmpty(queue)){
//         return NULL;
//     }
//     else{
//         int item = queue->data[queue->front];
//         queue->front += 1;
//         queue->size -= 1;
//         return item;
//     }
// }

// int front(struct Queue *queue){
//     return queue->front;
// }

// int rear(struct Queue *queue){
//     return queue->rear;
// }

// int size(struct Queue *queue){
//     return queue->size;
// }

// int main(){
//     struct Queue *queue = createQueue(4);
//     enqueue(queue,11);
//     enqueue(queue,14);
//     enqueue(queue,15);
//     enqueue(queue,17);
//     enqueue(queue,19);
//     enqueue(queue,12);

//     printf("\n%d dequeued from queue\n\n",dequeue(queue));

//     printf("Front item is %d\n", front(queue));
//     printf("Rear item is %d\n", rear(queue));
//     printf("Size of the Queue is %d\n", size(queue));

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct Queue {
    int front , rear , size;
    unsigned capacity;
    int *data;
} qNode;

    // function to create Queue

qNode *createQueue(unsigned capacity){
    qNode *queue = (qNode*)malloc(sizeof(qNode));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    // initialising the queue rear.
    queue->rear = capacity - 1;
    queue->data = (int*)malloc(queue->capacity*sizeof(int));
    return queue;
}

    // function to check either the function is full or not.

int isFull(qNode *queue){
    if(queue->size == queue->capacity){
        return 1;
    }
    return 0;
}

    // function to check either queue is empty or not

int isEmpty(qNode *queue){
    if(queue->size == 0){
        return 1;
    }
    return 0;
}

    // function to find the size of the queue
int qSize(qNode* queue){
    return queue->size;
}

    // function to enqueue
void enqueue(qNode* queue,int value){
    if(isFull(queue)){
        printf("Queue Overflow.\n");
    }
    queue->rear = (queue->rear + 1)%queue->capacity;
    queue->data[queue->rear] = value;
    queue->size += 1;
    printf("\n%d is enqueued in the Queue.\n",value);
}

int dequeue(qNode* queue){
    if(isEmpty(queue)){
        printf("Queue Underflow.\n\n");
    }
    int value = queue->data[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return value;
}

int front(qNode* queue){
    if (isEmpty(queue)){
        return INT_MIN;
    }
    return queue->data[queue->front];
}

int rear(qNode* queue){
    if (isEmpty(queue)){
        return INT_MIN;
    }
    return queue->data[queue->rear];
}

int main(){
    qNode *queue = createQueue(6);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    // enqueue(queue, 50);
    // enqueue(queue, 60);

    printf("\n%d dequeued from queue\n",dequeue(queue));
    printf("%d dequeued from queue\n",dequeue(queue));
    printf("Front item is %d\n", front(queue));
    printf("Rear item is %d\n", rear(queue));
    printf("Size of the Queue is %d\n", qSize(queue));

    return 0;
}