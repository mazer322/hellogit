#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
	char data;
	struct LinkedList *next;
};

struct LinkedList* Head=NULL;

void Push_element(char data) {
  struct LinkedList* to_new=NULL;

  to_new = (struct LinkedList*) malloc(sizeof(struct LinkedList)); 
  to_new->data= data;
  to_new->next= Head;
  Head= 	to_new;
}

char Pop_element(void) {
  struct LinkedList* to_delete = NULL;
  char pop_data;
  
  /* reiktu patikrinti ar sarasas jau nera tuscias */
  to_delete = 	Head;
  pop_data = 	Head -> data;
  Head = 	Head -> next;
  free(to_delete);
  return pop_data;
}

void String2List (char* str) {


  while (*str) Push_element(*str++);

}

void List2Prn (void)  {
  while (NULL != Head) printf("%c >> ",Pop_element());
  printf("NULL\n");
}


int main (void) {

  String2List("Globali");List2Prn();

  return 0;
}
