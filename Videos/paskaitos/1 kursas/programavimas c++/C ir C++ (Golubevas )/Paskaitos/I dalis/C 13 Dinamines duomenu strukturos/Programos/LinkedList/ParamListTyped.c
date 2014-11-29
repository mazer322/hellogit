#include <stdio.h>
#include <stdlib.h>

typedef	char Data, *String;
struct	LinkedList {
	Data data;
	struct LinkedList *next;
};
typedef	struct LinkedList Element, *Link;

void push_element(Link* headRef,Data data) {
  Link to_new = NULL;

  to_new = (Link) malloc(sizeof(Element)); 
  to_new->data= data;
  to_new->next= *headRef;
  *headRef= 	to_new;
}

char pop_element(Link* headRef) {
  Link to_delete = NULL;
  Data data;
  
  /* reiktu patikrinti ar sarasas jau nera tuscias */
  to_delete =	*headRef;
  data =	(*headRef) -> data;
  *headRef =	(*headRef) -> next;
  free(to_delete);
  return data;
}

Link string2list (String str) {
  Link head=NULL;

  while (*str) push_element(&head,*str++);
  return head;
}

void list2prn (Link head)  {
  while (NULL != head) printf("%c >> ",pop_element(&head));
  printf("NULL\n");
}


int main (void) {
  Link head1 = NULL;
  Link head2 = NULL;
  head1 = string2list("pirma"); list2prn(head1);
  head2 = string2list("antra"); list2prn(head2);

  return 0;
}
