#include <stdio.h>
#include <stdlib.h>
#define allocate (struct node *)malloc(sizeof(struct node));
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

struct node *deletionAtFirst(struct node *head)
{
    struct node *temp = allocate;
    temp = head;
    head = head->nxt;
    free(temp);
    return head;
}

struct node *deletionAtIndex(struct node *head, int index)
{
    struct node *temp = head;
    struct node *p = head->nxt;
    // int i = 0;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->nxt;
        p = p->nxt;
    }
    // p = temp->nxt;
    temp->nxt = p->nxt;
    free(p);
    return head;
}

struct node *deletionAtEnd(struct node *head)
{
    struct node *temp = head;
    struct node *p = head->nxt;
    while (p->nxt != NULL)
    {
        temp = temp->nxt;
        p = p->nxt;
    }
    temp->nxt = NULL;
    free(p);
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocated memory is from the heap
    head = allocate;
    second = allocate;
    third = allocate;
    fourth = allocate;

    // link 1st and 2nd
    head->data = 7;
    head->nxt = second;

    second->data = 69;
    second->nxt = third;

    third->data = 420;
    third->nxt = fourth;

    fourth->data = 441;
    fourth->nxt = NULL;

    struct node *ptr = head;
    llTraversal(ptr);
    printf("\n");

    // head = deletionAtFirst(head);
    // llTraversal(head);
    // printf("\n");

    // deletionAtIndex(head, 2);
    // llTraversal(head);
    // printf("\n");
    deletionAtEnd(head);
    llTraversal(head);
    printf("\n");
}