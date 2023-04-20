#include <stdio.h>
#include <stdlib.h>
#define MAX_ROWS 100
#define MAX_COLS 100
struct Element {
int row;
int col;
int value;
};
int main() 
{
int i, j, num_rows, num_cols, num_elements, element;
struct Element matrix[MAX_ROWS * MAX_COLS];
printf("Enter the number of rows: ");
scanf("%d", &num_rows);
printf("Enter the number of columns: ");
scanf("%d", &num_cols);
printf("Enter the number of non-zero elements: ");
scanf("%d", &num_elements);
for (i = 0; i < num_elements; i++) 
{
printf("Enter element %d (row, column, value): ", i+1);
scanf("%d%d%d", &matrix[i].row, &matrix[i].col, &matrix[i].value);
}
printf("Enter the element to search for: ");
scanf("%d", &element);
for (i = 0; i < num_elements; i++) 
{
if (matrix[i].value == element) 
{
printf("Element found at (%d, %d)\n", matrix[i].row, 
matrix[i].col);
return 0;
}
}
printf("Element not found\n");
}
