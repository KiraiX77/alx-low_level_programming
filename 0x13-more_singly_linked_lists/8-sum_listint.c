#include "lists.h"

/**
* sum_listint - this returns the sum of all data
* @head: this is the pointer to the first node
*
* Return: this gives us the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
