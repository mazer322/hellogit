#include <stdio.h>
#include <stdlib.h>
#include "strings.h"
#define  MY_PRINT(PTR) printf("\n\n%p %s",PTR,PTR)
#define  MY_PRINTD(PTR) printf("\n%p %08X",PTR,*PTR)

int main (void){

  char *str1="Eilute1", *str2="EiluteEilute";
  char *pch=NULL;

MY_PRINT(str1);MY_PRINTD(&str1);
MY_PRINT(str2);MY_PRINTD(&str2);
MY_PRINT(pch);MY_PRINTD(&pch);

cpystr(str1,str2); 
  MY_PRINT(str1);MY_PRINTD(&str1);
  MY_PRINT(str2);MY_PRINTD(&str2);
dupstr01(pch,str1);  
  MY_PRINT(pch);MY_PRINTD(&pch);
  /* free(pch);  */ /* Error: Exception */
dupstr11 (&pch,str1); 
  MY_PRINT(pch);MY_PRINTD(&pch);
  free(pch);

return 0;
}
