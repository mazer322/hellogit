
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int * memptr1;
int dim; 
char * memptr2;
  memptr1 = /*(char*)*/ malloc(sizeof(int));
  free(memptr1);
  
  printf("Kiek atminties reikia eilutei?\n");
  scanf("%d",&dim);
  if (NULL == (memptr2 = (char*)calloc(dim,sizeof(char)))) { 
    printf("Neliko laisvos atminties\n"); 
    exit(1); 
  }
  free(memptr2);

  return 0;
}