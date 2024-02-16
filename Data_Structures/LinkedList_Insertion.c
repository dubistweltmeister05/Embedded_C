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

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->nxt = head;
    temp->data = data;
    return temp;
}

struct node *insertAtIndex(struct mode *head, int data, int index)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->nxt;
        i++;
    }
    temp->data = data;
    temp->nxt = p->nxt;
    p->nxt = temp;

    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    struct node *p = head;
    while (p->nxt != NULL)
    {
        p = p->nxt;
    }
    p->nxt = temp;
    temp->data = data;
    temp->nxt = NULL;

    return head;
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
    // struct node *ptr = head;
    llTraversal(head);
    printf("\n");
    head = insertAtFirst(head, 56);
    llTraversal(head);
    printf("\n");
    insertAtIndex(head, 20, 1);
    llTraversal(head);
    printf("\n");
    insertAtEnd(head, 441);
    llTraversal(head);
    printf("\n");
}