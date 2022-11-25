#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertAtBegin(struct node *head)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node *));

    int eleAtBegin;
    printf("\nEnter Value of element at beginning: ");
    scanf("%d", &eleAtBegin);

    new->data = eleAtBegin;
    new->next = head;
    head = new;
    return head;
}

struct node *insertAtEnd(struct node *head)
{
    struct node *new, *temp;
    new = (struct node *)malloc(sizeof(struct node *));
    temp = head;

    int eleAtEnd;
    printf("\nEnter Value of element at End: ");
    scanf("%d", &eleAtEnd);
    new->data=eleAtEnd;
    new->next=NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = new;

}

void displayLinkedList(struct node *head)
{
    struct node *temp;
    temp = head;
    printf("\nList Elements are: \n");
    
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *new, *head;
    new = (struct node *)malloc(sizeof(struct node *));

    int firstValue;

    printf("Enter Value of First Element: ");
    scanf("%d", &firstValue);

    new->data = firstValue;
    new->next = NULL;

    head = new;
    printf("\nFirst Node Created Successfully !");

    head = insertAtBegin(head);
    printf("\nInserted Successfully !");

    insertAtEnd(head);

    displayLinkedList(head);
    return 0;
}
