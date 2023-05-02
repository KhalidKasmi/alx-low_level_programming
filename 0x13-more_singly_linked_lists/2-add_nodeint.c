#include "lists.h"

/**
 * listint_t *add_nodeint - add a new node in the beginning of the list
 * @head : linked list to traverse
 * @n : the value to insert
 * 
 * Return : the address of the new node or NULL 
 */

listint_t *add_nodeint (listint_t ** head, const int n)
{
  listint_t *new;

  new = malloc (sizeof (listint_t));
  if (new == NULL)
    {
      return NULL;
    }

  new->n = n;
  new->next = *head;
  *head = new;

  return (new);

}

