#include <stdio.h>
#include "stack_21.h"

int main(void) {
  int c;
 
  while ( '\n' != (c=getchar()) ) push(c);
  stack[top++] = '!';
  while ( '\n' != (c=pop()) )  putchar(c);

  return 0;
}
