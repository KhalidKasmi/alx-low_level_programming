
#include "lists.h"

/**
* print_listint - print elements of a linked list 
* @h :  linked list of type listint_t to traverse
*
* return : elements of the list printed
* /

size_t print_listint (const listint_t * h)
{
  
  size_t count = 0;
  
  while (h!= NULL)
    {
      printf ("%d \n", h->n);
      h = h->next;
      count ++;
    }
    return count;
}

