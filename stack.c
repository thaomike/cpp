#include<stdio.h>

typedef struct{
    int top;
    int nodes[100];
    
} stack;

// int a[100];
// int top = -1;


//stack : push, pop, size, empty, top
//queue: push

int empty(stack *s) {
    if(s->top == -1) return 1;
    return 0;
}

void push(int x, stack *s)
{
    s->top++;
    s->nodes[s->top] = x;
}

int pop(stack *s)
{
    if(s->top >= 0) 
    {
        int data = s->nodes[s->top];
        s->top--;
        return data;
    }
}

int top(stack *s)
{
    if(!empty(s))
    {
        return s->nodes[s->top];
    }
}


int main()
{
    stack s;
    s.top = -1;
    // printf("%d", s->top);

    // push(5, &s);
    // push(4, &s);
    // push(3, &s);
    // push(2, &s);
    // push(1, &s);
    // while (!empty(&s))
    // {
    //     printf("%d ",pop(&s));
    // }
    // printf("%d",s.top);

    int so = 10;
    while (so > 0)
    {
        int tmp = so % 2;
        so /= 2;
        push(tmp, &s);
    }
    while (!empty(&s))
    {
        printf("%d ",pop(&s));
    }
}