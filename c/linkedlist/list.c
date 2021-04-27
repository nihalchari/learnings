#include <stdio.h>
#include <stdlib.h>
#include <error.h>

struct node
{
    int data;
    struct node *next;
};

struct node *addNode(struct node *head, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        perror(":");
    }
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    struct node *trev = head;

    while (trev->next != NULL)
    {
        trev = trev->next;
    }
    if (trev->next == NULL)
    {
        trev->next = newnode;
        return head;
    }
}

void display(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
    }

    while (head->next != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("%d\n", head->data);
}

struct node *merge(struct node *h1, struct node *h2)
{
    struct node *h3 = NULL;
    if (h1 == NULL && h2 == NULL)
    {
        return h3;
    }
    int data = 0;
    while (h1 != NULL && h2 != NULL)
    {

        if (h1->data > h2->data)
        {
            data = h1->data;
            h1 = h1->next;
        }
        else
        {
            data = h2->data;
            h2 = h2->next;
        }
        h3 = addNode(h3, data);
    }

    while (h1 != NULL)
    {
        int s2 = 1;
        if (h1->data > h2->data)
        {
            data = h1->h1 = h1->next;
        }
    }
}

int main()
{
    int n = 5;
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    while (n)
    {
        head1 = addNode(head1, n);
        --n;
    }
    display(head1);
    n = 10;
    while (n > 5)
    {
        head2 = addNode(head2, n);
        --n;
    }
    display(head2);

    return 0;
}
