#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  MY_PRINT(PTR) printf("\n\n%p %s",PTR,PTR)
#define  MY_PRINTD(PTR) printf("\n%p %08X",PTR,*PTR)

void dupstr01 (char* dest, const char* sour) {
  dest = (char*) calloc(strlen(sour)+1,sizeof (char));
  while (*dest++=*sour++);
}

void dupstr11 (char** dest_ref, const char* sour){
 char *ptrtmp;
  ptrtmp = *dest_ref = (char*) calloc(strlen(sour)+1,sizeof (char));
  while (*ptrtmp++=*sour++);
}

int main (void){

  char *str="Eilute";
  char *ptr=NULL;

MY_PRINT(str);MY_PRINTD(&str);
MY_PRINT(ptr);MY_PRINTD(&ptr);


dupstr01(ptr,str);  
MY_PRINT(str);MY_PRINTD(&str);
MY_PRINT(ptr);MY_PRINTD(&ptr);
  /* free(ptr);  */ /* Error: Exception */

dupstr11 (&ptr,str); 
MY_PRINT(str);MY_PRINTD(&str);
MY_PRINT(ptr);MY_PRINTD(&ptr);
  free(ptr);

return 0;
}
