#include <stdio.h>
#define MAX_DEGREE 3
void add_polynomials(int p1[], int p2[], int result[]) {
int i;
for (i = 0; i <= MAX_DEGREE; i++) {
result[i] = p1[i] + p2[i];
}
}
int main() {
int p1[MAX_DEGREE + 1] = {1, 2, 3}; 
int p2[MAX_DEGREE + 1] = {1, 3, 2}; 
int result[MAX_DEGREE + 1];
add_polynomials(p1, p2, result);
int length = sizeof(result)/sizeof(result[0]);
printf("Result: ");
for (int i = length-1; i >= 0; i--) 
{
printf("%dx^%d ", result[i], i);
}
printf("\n");
return 0;
}
