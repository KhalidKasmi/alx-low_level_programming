#include "lists.h"

/**
 * add_nodeint_end- add a new node in the end of the list
 * @head : linked list to traverse
 * @n : the value to insert
 * 
 * Return : the address of the new node or NULL 
 */
listint_t *add_nodeint_end (listint_t ** head, const int n)
{
  listint_t *new;
  new = malloc (sizeof (listint_t));
  if (new == NULL)
    {
      return (NULL);
    }

  new->n = n;
  new->next = NULL;
  if (*head == NULL)
    {
      *head = new;
      return (new);
    }
  listint_t *temp = *head;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = new;

  return (new);

}

