#include <stdio.h>
#include "stack_2.h"

char stack[STACK_SIZE];
int  top = 0;

void reset(void) {
  top = 0;
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
