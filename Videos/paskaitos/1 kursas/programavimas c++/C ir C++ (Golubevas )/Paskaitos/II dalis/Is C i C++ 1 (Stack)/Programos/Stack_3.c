#include <stdio.h>
#include "stack_3.h"

static char stack[STACK_SIZE];
static int  top = 0;

static int is_empty (void) {
  return (0==top) ? 1 : 0;
}
static int  is_full (void) {
  return (STACK_SIZE == top) ? 1 : 0;
}
void reset(void) {
  top=0;
}
void push(char c) {
  if (!is_full()) stack[top++] = c;
  else  printf("Stekas pilnas\n");
}
char pop(void) {
  if (!is_empty()) return stack[--top];
  printf("\nStekas tuscias");
  return '\n';
}
