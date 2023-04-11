#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10

int *stack;
int top = -1;
int capacity = INITIAL_CAPACITY;
int element;
void push(int element)
{
    if (top == capacity - 1)
    {
        capacity = capacity * 2;
        stack = (int *)realloc(stack, capacity * sizeof(int));
    }
    top++;
    stack[top] = element;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return -1;
    }
    int element = stack[top--];
    if (top == (capacity / 2)-1)
    {
        capacity = capacity / 2;
        stack = (int *)realloc(stack, capacity * sizeof(int));
    }
    return element;
}
int display()
{
    int i;
    if(top==-1){
    printf("stack is empty\n");
    }
    for(i=top;i>=0;i++)
    printf("%d",*(stack+i));
}

void main()
{
    stack = (int *)malloc(INITIAL_CAPACITY * sizeof(int)); // Move the memory allocation here
   int choice;
    while(1)
    { 
    printf("enter your choice\n 1.push\n 2.pop\n 3.display \n 4 exit\n"); 
    scanf("%d",&choice); 
    switch(choice) 
    { 
    case 1:printf("enter the element\n");
    scanf("%d",&element);
        push(element);
    break; 
    case 2: printf("the deleted element is %d\n",pop());  
    break; 
    case 3:display(); 
    break; 
    case 4: exit(0); 
    default:printf("invalid\n");
    } 
    }
    free(stack);
}
