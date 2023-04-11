#include<stdio.h>
#include<stdlib.h>
int s[3];
int top = -1;
void push()
{
    int value,max;
    if(top==3-1)
    {
        printf("stack is full");
    }
    else
    top++;
    printf("enter the element");
    scanf("%d",&value);
    s[top]=value;
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    printf("elements deleted are");
    printf("%d\n",s[top]);
    top--;
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    for(int i=0;i<=top;i++)
    printf("%d\n",s[i]);
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n menu\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: push();
            break;
        case 2: pop();
          break;
          case 3: display();
          break;
        case 4: exit(0);
        break;
        default:printf("invalid");
            break;
        }
    }
    return 0;
}
