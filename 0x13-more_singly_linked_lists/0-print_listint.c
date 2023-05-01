
#include "lists.h"

/**
* print_listint to print elements of a linked list 
* @h : as an argument to point on the head 
*
* return : elements of the list printed
* /


size_t print_listint(const listint_t *h){
listint_t *temp;
temp = h;
while (temp != NULL){
temp = temp -> next ;
printf (" %d \n",temp -> data);
}
}
