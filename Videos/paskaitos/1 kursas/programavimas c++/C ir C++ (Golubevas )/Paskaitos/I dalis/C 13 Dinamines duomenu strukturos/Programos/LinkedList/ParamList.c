#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
	char data;
	struct LinkedList *next;
};



void push_element(struct LinkedList** headRef,char data) {
  struct LinkedList* to_new = NULL;

  to_new = (struct LinkedList*) malloc(sizeof(struct LinkedList)); 
  to_new->data= data;
  to_new->next= *headRef;
  *headRef= 	to_new;
}

char pop_element(struct LinkedList** headRef) {
  struct LinkedList* to_delete = NULL;
  char pop_data;
  
  /* reiktu patikrinti ar sarasas jau nera tuscias */
  to_delete =	*headRef;
  pop_data =	(*headRef) -> data;
  *headRef =	(*headRef) -> next;
  free(to_delete);
  return pop_data;
}

struct LinkedList* string2list (char* str) {
  struct LinkedList* head=NULL;

  while (*str) push_element(&head,*str++);
  return head;
}

void list2prn (struct LinkedList* head)  {
  while (NULL != head) printf("%c >> ",pop_element(&head));
  printf("NULL\n");
}


int main (void) {
  struct LinkedList* head=NULL;
  head = string2list("lokali"); list2prn(head);

  return 0;
}
