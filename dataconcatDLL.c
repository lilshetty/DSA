#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void display(Node *head) {
    Node *temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void concatenate(Node **head1, Node **head2) {
    if (*head1 == NULL) {
        *head1 = *head2;
        return;
    }
    if (*head2 == NULL)
        return;

    Node *temp1 = *head1;
    while (temp1->next != NULL)
        temp1 = temp1->next;

    temp1->next = *head2;
    (*head2)->prev = temp1;

    *head2 = NULL;
}

int main() {
    Node *list1 = NULL;
    Node *list2 = NULL;

    insertAtEnd(&list1, 10);
    insertAtEnd(&list1, 20);
    insertAtEnd(&list1, 30);

    insertAtEnd(&list2, 40);
    insertAtEnd(&list2, 50);
    insertAtEnd(&list2, 60);

    printf("List 1: ");
    display(list1);

    printf("List 2: ");
    display(list2);

    concatenate(&list1, &list2);

    printf("Concatenated list: ");
    display(list1);

    return 0;
}
