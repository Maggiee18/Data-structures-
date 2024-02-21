#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
  if (top >= MAX_SIZE - 1) {
    printf("Stack Overflow! Cannot push item.\n");
  } else {
    top++;
    stack[top] = item;
    printf("Pushed %d into the stack.\n", item);
  }
}

void pop() {
  if (top == -1) {
    printf("Stack Underflow! Cannot pop item.\n");
  } else {
    printf("Popped %d from the stack.\n", stack[top]);
    top--;
  }
}

void display() {
  if (top == -1) {
    printf("Stack is empty.\n");
  } else {
    printf("Stack elements are: ");
    int i;
    for (i = top; i >= 0; i--) {
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}

int main() {
  push(10);
  push(20);
  push(30);
  display();
  pop();
  display();
  return 0;
}
