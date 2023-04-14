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
struct Node *deleteAtFirst(struct Node *head)
{
struct Node *ptr = head;
head = head->next;
head->prev=NULL;
free(ptr);
return head;
}
struct Node *deleteAtIndex(struct Node *head, int index)
{
struct Node *p = head;
struct Node *q = head->next;
for (int i = 0; i < index - 1; i++)
{
p = p->next;
q = q->next;
}
p->next = q->next;
q->next->prev=q->prev;
free(q);
return head;
}
struct Node *deleteAtEnd(struct Node *head)
{
struct Node *p = head;
struct Node *q = head->next;
while (q->next != NULL)
{
p = p->next;
q = q->next;
}
p->next = NULL;
q->prev=NULL;
free(q);
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
head = deleteAtFirst(head);
head = deleteAtIndex(head, 1);
head = deleteAtEnd(head);
printf("\nLinked list after insertion\n");
linkedListTraversal(head);
return 0;
}
