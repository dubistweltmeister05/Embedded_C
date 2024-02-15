#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *nxt;
};
void llTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : - %d\n", ptr->data);
        ptr = ptr->nxt;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // allocated memory is from the heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link 1st and 2nd
    head->data = 7;
    head->nxt = second;

    second->data = 69;
    second->nxt = third;

    third->data = 420;
    third->nxt = NULL;
    struct node *ptr = head;
    llTraversal(ptr);
}