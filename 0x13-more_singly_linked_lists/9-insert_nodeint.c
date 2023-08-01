#include "lists.h"

/**
* insert_nodeint_at_index - in the given index this inserts new node
* @head: this is the adress of the pointer to first node
* @idx: this is the index to insert a new node
* @n: the n is the value of the new node
*
* Return: This is the adress of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_mode = malloc(sizeof(listint_t))
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	free(new_node);
return (NULL);
}
