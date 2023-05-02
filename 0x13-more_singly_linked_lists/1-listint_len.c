#include "lists.h"

/**
* listint_len - counts elements of a linked list 
* @h :  linked list of type listint_t to traverse
*
* return : number of elements
* /
size_t listint_len(const listint_t *h)
{
 
  size_t count = 0;
  
  while (h)
    {
      h = h->next;
      count ++;
    }
    return count;
}

