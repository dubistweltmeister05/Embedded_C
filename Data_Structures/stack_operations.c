#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isFULL(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr, int data)
{
    if (isFULL(ptr))
        printf("Cannot push, it'll cause overflow\n");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Cannot pop, it'll cause underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
    }
}

int peek(struct stack *ptr, int index)
{
    int p = ptr->top;
    while (p > index)
    {
        p--;
    }
    return ptr->arr[p];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 10;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));
    printf("The stack has been created :-\n");

    // printf("before Pushing anything \n");
    // printf("%d\n", isEmpty(sp));
    // printf("%d\n", isFULL(sp));
    push(sp, 69);
    push(sp, 420);
    push(sp, 999);
    push(sp, 666);
    push(sp, 1400);
    push(sp, 50);

    printf("the number at the index 2 is:- %d\n", peek(sp, 2));
    return 0;
}