#include "lists.h"

/**
* get_nodeint_at_index - returning the node at a certain index of a linked list
* @head: this is the very  first node in the linked list
* @index: the index of the node we want to return
*
* Return:the pointer to the node that we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
