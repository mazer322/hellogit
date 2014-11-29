#include <stdio.h>
#include <stdlib.h>
#include "str_hand.h"
#define  MY_PRINT(PTR) printf("\n\n%p %s",PTR,PTR)
#define  MY_PRINTD(PTR) printf("\n%p %08X",PTR,*PTR)

char gach[]="Masyvas1", *gstr="Eilute1";

int main (void){
char lach[]="Masyvas2", *lstr="Eilute2";
char *pch=gach;

MY_PRINT(gach);MY_PRINTD(&gach);
MY_PRINT(gstr);MY_PRINTD(&gstr);
MY_PRINT(lach);MY_PRINTD(&lach);
MY_PRINT(lstr);MY_PRINTD(&lstr);
MY_PRINT(pch);MY_PRINTD(&pch);

cpystr(pch,lach); 
  MY_PRINT(pch);MY_PRINTD(&pch);
dupstr01(pch,gstr);  
  MY_PRINT(pch);MY_PRINTD(&pch);
  /* free(pch);  */ /* Error: Exception */
dupstr02 (&pch,lstr); 
  MY_PRINT(pch);MY_PRINTD(&pch);
  free(pch);
dupstr11 (&pch,gstr); 
  MY_PRINT(pch);MY_PRINTD(&pch);
  free(pch);
dupstr12 (&pch,lstr); 
  MY_PRINT(pch);MY_PRINTD(&pch);
  free(pch);
pch = dupstr (gach); 
  MY_PRINT(pch);MY_PRINTD(&pch);
  free(pch);

return 0;
}
