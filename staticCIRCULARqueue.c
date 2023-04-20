#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = 0;
int rear = -1;
int size = 0;
void enqueue(int element)
{
if ((rear + 1) % MAX_SIZE == front)
{
printf("Error: Queue is full\n");
}
else
{
rear = (rear + 1) % MAX_SIZE;
queue[rear] = element;
size++;
}
}
int dequeue()
{
if (front == rear)
{
printf("Error: Queue is empty\n");
return -1;
}
else
{
int element = queue[front];
front = (front + 1) % MAX_SIZE;
size--;
return element;
}
}
void display()
{
if (front == rear)
{
printf("Error: Queue is empty\n");
}
else
{
printf("Queue: ");
for (int i = front; i != rear; i = (i + 1) % MAX_SIZE)
{
printf("%d ", queue[i]);
}
printf("%d\n", queue[rear]);
}
}
void main()
{
int choice;
  scanf("%d",choice);
  switch(choice)
  {
    case 1: enqueue(10);
      break;
    case 2: dequeue();
      break;
    case 3: display();
      break;
    default:printf("invalid");
  }
}
