#include "lists.h"

/**
 * free_listint2 -it does free a linked list
 * @head:its the pointer to the listint_t list that will be free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

