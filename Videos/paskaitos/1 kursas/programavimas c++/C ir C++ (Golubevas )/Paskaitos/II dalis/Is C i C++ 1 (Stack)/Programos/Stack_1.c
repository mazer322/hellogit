#include <stdio.h>
#define STACK_SIZE 10

char stack[STACK_SIZE];
int  top = 0;
void push(char c);
char pop(void);

int main(void) {
  int c;

  while ( '\n' != (c=getchar()) ) push(c);
  while ( '\n' != (c=pop()) )  putchar(c);

  return 0;
}

void push(char c) {
  if (top < STACK_SIZE) stack[top++] = c;
  else  printf("Stekas pilnas\n");
}

char pop(void) {
  if (top > 0) return stack[--top];
  printf("\nStekas tuscias");
  return '\n';
}
