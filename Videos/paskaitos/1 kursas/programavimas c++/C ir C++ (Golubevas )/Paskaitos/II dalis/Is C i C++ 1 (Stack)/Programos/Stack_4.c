#include <stdio.h>
#include "stack_4.h"

static int is_empty (stack *id) {
  return (0 == id->top) ? 1 : 0;
}
static int  is_full (stack *id) {
  return (STACK_SIZE == id->top) ? 1 : 0;
}
void reset(stack *id) {
  id->top=0;
}
void push(stack *id, char c) {
  if (!is_full(id)) id->stack[id->top++] = c;
  else  printf("Stekas pilnas\n");
}
char pop(stack *id) {
  if (!is_empty(id)) return id->stack[--id->top];
  printf("\nStekas tuscias\n");
  return '\n';
}