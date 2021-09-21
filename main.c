#include <stdio.h>

#include "list.h"

int main() {
  elem val;
  printf("Tests for linked list implementation\n");
  list_t *mylist = list_alloc();
  
  
  list_add_to_front(mylist, 2);
  list_add_to_back(mylist, 20);
  list_add_to_front(mylist, 25);
  list_add_at_index(mylist, 10, 2); 
  list_add_at_index(mylist, 40, 2);
  list_add_to_back(mylist, 15);
  list_add_to_front(mylist, 5);
  list_add_at_index(mylist, 35, 4);
  list_add_to_back(mylist, 30);
  
  list_print(mylist);
  printf("\n");
  printf("\n");
  list_remove_from_front(mylist);
  list_remove_at_index(mylist, 2);
  list_remove_from_back(mylist);
  list_print(mylist);
  printf("\n");
  
  val = list_length(mylist);
  printf("Length of list is: %d", val);
  printf("\n");
  
  bool x = list_is_in(mylist, 2);
  printf("2 is in list: ");
  if(x == 1){
    printf("True");
  } else {
    printf("False");
  }
  printf("\n");
  
  val = list_get_elem_at(mylist, 4);
  printf("Element at index 4: %d", val);
  printf("\n");
  
  val = list_get_index_of(mylist, 35);
  printf("Index of 35: %d", val);
  printf("\n");
  
  return 0;
}
