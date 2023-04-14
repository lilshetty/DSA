#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *next;
struct Node *prev;
};
void linkedListTraversal(struct Node *ptr)
{
while (ptr != NULL)
{
printf("Element: %d\n", ptr->data);
ptr = ptr->next;
}
}
struct Node *insertAtFirst(struct Node *head, int data)
{
struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
newnode->data = data;
newnode->next = head;
newnode->prev = NULL;
head=newnode;
return head;
}
struct Node *insertAtIndex(struct Node *head, int data, int pos)
{
struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
newnode->data = data;
struct Node *p = head;
int i = 0;
while (i != pos - 1)
{
p = p->next;
i++;
}
struct Node *q = p->next;
newnode->next = p->next;
p->next=newnode;
newnode->prev=q->prev;
q->prev=newnode;
return head;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
newnode->data = data;
struct Node *p = head;
while (p->next != NULL)
{
p = p->next;
}
p->next = newnode;
newnode->next = NULL;
newnode->prev=p;
return head;
}
int main()
{
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
fourth = (struct Node *)malloc(sizeof(struct Node));
head->data = 7;
head->next = second;
head->prev = NULL;
second->data = 11;
second->next = third;
second->prev = head;
third->data = 41;
third->next = fourth;
third->prev = second;
fourth->data = 66;
fourth->next = NULL;
fourth->prev = third;
printf("Linked list before insertion\n");
linkedListTraversal(head);
head = insertAtFirst(head, 56);
head = insertAtIndex(head, 56, 1);
head = insertAtEnd(head, 56);
printf("\nLinked list after insertion\n");
linkedListTraversal(head);
return 0;
}
