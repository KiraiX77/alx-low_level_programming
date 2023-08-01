#include "lists.h"
 /**
 * sum_listint -this does calculate the sum of all the data in a listint_t list
 * @head: this refers to the  first node in the linked list
 *
 * Return: the resultof the sum
 */
21 int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
