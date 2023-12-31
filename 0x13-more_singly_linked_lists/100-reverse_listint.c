#include "lists.h"

/**
* reverse_listint - this is for reversing a linked list
* @head: this is the pointer to the first node in the list
*
* Return: the pointer to the first node in the newly made list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;

return (*head);
}
