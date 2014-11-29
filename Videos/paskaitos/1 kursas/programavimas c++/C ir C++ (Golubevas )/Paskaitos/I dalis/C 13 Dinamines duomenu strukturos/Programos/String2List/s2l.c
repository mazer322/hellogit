#include <stdio.h>
#include <stdlib.h>
#include "s2l.h"

Link s2l_iter (String str) {
  Link head=NULL,tail=NULL;
  if ('\0' != *str) {
    head = (Link) malloc(sizeof(Element)); /*...pasitikriname...*/
    head -> data = *str++;
    tail = head;
    while (*str) {
      tail -> next = (Link) malloc(sizeof(Element)); /*...pasitikriname...*/
      tail = tail -> next;
      tail -> data = *str++;
    }
    tail -> next = NULL;
  }
  return head;
}

Link s2l_recur (String str) {
    Link head=NULL;

    if (*str) {
	head = (Link) malloc(sizeof(Element)); /*...pasitikriname...*/
	head -> data = *str++;
	head -> next = s2l_recur (str); /* rekursija */
	return head;
	}
    else
	return NULL;
}
void l2prn_iter (Link h)  {
  while (NULL != h) {
    printf("%c >> ",h->data);
    h = h->next;
  }
  printf("NULL");
}
void l2prn_recur (Link h)  {

  if (h) {
    printf("%c >> ",h->data);
    l2prn_iter( h->next);
  }
  else
    printf("NULL");
}