#include <stdio.h>
#include "stack_3.h"

extern char stack[STACK_SIZE];
extern int  top;

int main(void) {
  int c;
  int i;

  reset();
  while ( '\n' != (c=getchar()) ) push(c);
  if ( !is_full()) stack[top++] = '!';
/*
  stack[top++] = '!';
Linker Error: Unresolved external '_stack' referenced from DRIVER_3.OBJ
Linker Error: Unresolved external '_top' referenced from DRIVER_3.OBJ
*/
  while ( '\n' != (c=pop()) )  putchar(c);

  return 0;
}
