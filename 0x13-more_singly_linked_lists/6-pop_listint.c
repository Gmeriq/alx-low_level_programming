#include "lists.h"

/**
 * pop_listint - frees the head node of a list
 * @head: double pointer to the list
 *
 * Return: */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = (*head)->n;

	if (*head == NULL)
		return (0);
	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (i);
}
