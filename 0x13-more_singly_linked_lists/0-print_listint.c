
#include "lists.h"

/**
* print_listint - print elements of a linked list 
* @h :  linked list of type listint_t to traverse
*
* return : elements of the list printed
* /

size_t print_listint (const listint_t * h)
{
  const listint_t *temp;
  size_t count = 0;
  temp = h;
  while (temp != NULL)
    {
      printf (" %d \n", temp->n);
      temp = temp->next;
      count ++;
    }
    return count;
}
