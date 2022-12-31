#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Stack{
    struct Node *top;
};

struct Node *push(struct Stack *st, int value){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = st->top;
    return temp;
}
int peek(struct Stack *st){
    if (st->top == NULL){
        return -1;
    }
    else{
        return st->top->data;
    }
}
int pop(struct Stack *st){
    if (st->top == NULL){
        return -1;
    }
    else{
        int ans = st->top->data;
        st->top = st->top->next;
        return ans;
    }
}

int main(){
    struct Stack *st = (struct Stack *)malloc(sizeof(struct Stack));
    st->top = (struct Node *)malloc(sizeof(struct Node));
    st->top = NULL;
    st->top = push(st, 10);
    st->top = push(st, 20);
    pop(st);
    st->top = push(st, 30);
    printf("%d", peek(st));
    printf("\nName:DHAMELIYA ARPIT MUKESHBHAI\n");
    printf("En. No. : 210130107036 \n");
    printf("Practical No. : %d", 8);
    time_t t;
    time(&t);
    printf("\nTime : %s", ctime(&t));
    return 0;
}