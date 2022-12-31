#include <stdio.h>
#include <stdlib.h>
#include<time.h>
struct queue
{
    int front;
    int rear;
    int size;
    int *Q;
};
void create(struct queue *q, int size){
    q->size = size;
    q->front = q->rear;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void enqueue(struct queue *q, int x){
    if ((q->rear + 1) % q->size == q->front)
        printf("queue is full\n");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct queue *q){
    int x = -1;
    if (q->front == q->rear)
        printf("queue is empty");
    else{
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}
void display(struct queue q){
    int i = q.front + 1;
    do
    {
        printf("%d", q.Q[i]);
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
    printf("\n");
}
int main(){
    struct queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    display(q);
    printf("%d\n ", dequeue(&q));
    display(q);
    printf("\nName: DHAMELIYA ARPIT\n");
    printf("En. No. : 210130107036 \n");
    printf("Practical No. : %d", 5);
    printf("\nAim : To convert infinix into postfix.");
    time_t t;
    time(&t);
    printf("\nTime : %s", ctime(&t));
    return 0;
}