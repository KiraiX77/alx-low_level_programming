#include "lists.h"

/**
 * free_listint -it does free a linked list
 * @head: listint_t it's the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
