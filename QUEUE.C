#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void enqueue(struct queue *q, int x)
{
    if (q->rear == q->size - 1)
        printf("queue is full");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct queue *q)
{
    int x = -1;
    if (q->front == q->rear)
        printf("queue is empty");
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
void display(struct queue *q)
{
    int i;
    for (i = q->front + 1; i <= q->rear; i++)
    {
        printf("%d\t", q->Q[i]);
    }
    printf("\n");
}
int main(){
    struct queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 12);
    enqueue(&q, 14);
    display(&q);
    printf("%d\n", dequeue(&q));
    display(&q);
    printf("\nName: DHAMELIYA ARPIT\n");
    printf("En. No. : 210130107036 \n");
    printf("Practical No. : %d", 5);
    printf("\nAim : To convert infinix into postfix.");
    time_t t;
    time(&t);
    printf("\nTime : %s", ctime(&t));
    return 0;
}