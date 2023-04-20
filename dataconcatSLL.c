#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *create(struct node *head, int data)
{
struct node *newnode = (struct node *)malloc(sizeof(struct node));
newnode->data = data;
newnode->next = NULL;
struct node *temp;
temp = head;
if (temp == NULL)
head = newnode;
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
return head;
}
}
struct node *dataconcatenate(struct node *head1, struct node *head2)
{
struct node *temp;
temp = head1;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = head2;
return head1;
}
void display(struct node *head)
{
struct node *temp;
temp = head;
while (temp != NULL)
{
printf("%d \t", temp->data);
temp = temp->next;
}
printf("\n");
}
int main()
{
struct node *head1 = NULL;
struct node *head2 = NULL;
head1 = create(head1, 10);
head1 = create(head1, 45);
head1 = create(head1, 34);
head1 = create(head1, 75);
head1 = create(head1, 50);
head2 = create(head2, 17);
head2 = create(head2, 47);
head2 = create(head2, 22);
printf("List 1 Before Concatenation\t");
display(head1);
printf("List 2 Before Concatenation\t");
display(head2);
head1 = dataconcatenate(head1, head2);
printf("List After Concatenation\t");
display(head1);
}
