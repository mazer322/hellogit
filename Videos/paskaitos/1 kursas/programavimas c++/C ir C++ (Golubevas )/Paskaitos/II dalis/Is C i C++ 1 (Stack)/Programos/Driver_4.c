#include <stdio.h>
#include "stack_4.h"

int main(void) {
  int c;
  stack st1, st2;

  reset(&st1); 
  while ( '\n' != (c=getchar()) ) push(&st1,c);
  while ( '\n' != (c=pop(&st1)) )  putchar(c);

  reset(&st2);
  while ( '\n' != (c=getchar()) ) push(&st2,c);
  while ( '\n' != (c=pop(&st2)) )  putchar(c);

  st1.stack[st1.top++] = '!';
  putchar(pop(&st1));
  return 0;
}
