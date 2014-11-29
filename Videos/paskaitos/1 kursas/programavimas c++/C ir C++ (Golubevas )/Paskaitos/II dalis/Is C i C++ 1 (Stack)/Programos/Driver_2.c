#include <stdio.h>
#include "stack_2.h"

extern char stack[STACK_SIZE];
extern int  top;

int main(void) {
  int c;
 
  while ( '\n' != (c=getchar()) ) push(c);
  stack[top++] = '!';
  while ( '\n' != (c=pop()) )  putchar(c);

  return 0;
}
