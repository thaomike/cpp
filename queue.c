#include<stdio.h>

int MAX = 100;
typedef struct{
    int rear, front;
    int data[100];
} queue;

int empty(queue *q)
{
    if(q->front == q->rear) return 1;
    return 0;
}

int Initialize(queue *q)
{
    q->front = q->rear = MAX-1;   
}

int push(queue *q, int x)
{
    if(q->rear == MAX - 1) q->rear = 0;
    else q->rear++;
    if(q->rear == q->front) printf("FULL!");
    q->data[q->rear] = x;
}



int main()
{
    queue q;

}