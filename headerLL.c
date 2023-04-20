#include <malloc.h>
#include <stdio.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* create_header_list (int data) {
    struct node *new_node, *ptr;
    new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL) {
        head = (struct node*) malloc(sizeof(struct node));
        head->next = new_node;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    return start;
}

struct node* display () {
    struct node* node;
    ptr = head;
    ptr = ptr->next;
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    printf("\\n");
    return start;
}

int main () {
    create_header_list (11);
    create_header_list (12);
    create_header_list (13);
    display ();
    create_header_list (14);
    create_header_list (15);
    display ();
    return 0;
}
