
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *arr;
};

struct Stack *createstack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(capacity * sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack *stack)
{
    return (stack->top == stack->capacity - 1);
}

int isEmpty(struct Stack *stack)
{
    return (stack->top == -1);
}

void push(struct Stack *stack, int item)
{
    if (isFull(stack))
    {
        return;
    }
    stack->arr[++stack->top] = item;
    printf("The pushed item is :- %d\n", item);
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->arr[stack->top--];
}
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->arr[stack->top];
}

int main()
{
    struct Stack *stack = createstack(100);
    push(stack, 69);
    push(stack, 420);
    push(stack, 21);

    printf("The Item at the top is :- %d\n", peek(stack));

    pop(stack);
    printf("The Item at the top is :- %d\n", peek(stack));

    pop(stack);
    printf("The Item at the top is :- %d\n", peek(stack));

    return 0;
}
