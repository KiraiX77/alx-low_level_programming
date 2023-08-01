#include "lists.h"

/**
 * pop_listint - it does delete the head node of a linked list
 * @head: its the pointer to the very first element in the linked list
 * Return:it means that the data inside the elements that was deleted,
 * or 0 if the list has been found empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
