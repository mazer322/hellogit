#include <string.h>
#include <stdlib.h>

void cpystr (char* dest, const char* sour) {
  while (*dest++=*sour++);
}
void dupstr01 (char* dest, const char* sour) {
  dest = (char*) calloc(strlen(sour)+1,sizeof (char));
  while (*dest++=*sour++);
}
void dupstr02 (char** dest_ref, const char* sour) {
  *dest_ref = (char*) calloc(strlen(sour)+1,sizeof (char));
  while (*(*dest_ref)++=*sour++);  
  /* bet ne  while (**dest++=*sour++); */
}
void dupstr11 (char** dest_ref, const char* sour){
 char *ptrtmp;
  ptrtmp = *dest_ref = (char*) calloc(strlen(sour)+1,sizeof (char));
  while (*ptrtmp++=*sour++);
}
void dupstr12 (char* dest[], const char sour[]) {
 int i;
  *dest = (char*) calloc(strlen(sour)+1,sizeof (char));
  for (i=0; (*dest)[i]=sour[i] ;i++);
}
void dupstr13 (char** dest, const char* sour) {
 int i;
  *dest = (char*) calloc(strlen(sour)+1,sizeof (char));
  for (i=0; *(*dest+i)=*(sour+i) ;i++);
}
char* dupstr (const char* sour) {
 int i;char* dest;
  dest = (char*) calloc(strlen(sour)+1,sizeof (char));
  for (i=0; *(dest+i)=*(sour+i) ;i++);
  return dest;
}
