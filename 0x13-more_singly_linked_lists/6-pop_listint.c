#include "lists.h"

/**
 * pop_listint -this does deleteor remove the head node of a certain linked list,
 * @head:this is the pointer towards the very first element in the linked list
 *
 * Return: this means that the data inside the elements that was deleted,
 * or 0 if the list is empty
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
