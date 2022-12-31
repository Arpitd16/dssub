#include <stdio.h>
#include <stdlib.h>
#include<time.h>
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;
void enqueue(int x){
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
        printf("queue is full");
    else{
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else {
            rear->next = t;
            rear = t;
        }
    }
}
int dequeue(){
    int x = -1;
    struct node *t;
    if (front == NULL)
        printf("queue is empty");
    else{
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}
void display(){
    struct node *t = front;
    while (t){
        printf("%d", t->data);
        t = t->next;
    }
    printf("\n");
}
int main(){
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    printf("%d\n", dequeue());
    display();
    printf("\nName:DHAMELIYA ARPIT MUKESHBHAI\n");
    printf("En. No. : 210130107036 \n");
    printf("Practical No. : %d", 9);
    time_t t;
    time(&t);
    printf("\nTime : %s", ctime(&t));
}