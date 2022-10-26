#include "lists.h"

/**
 * insert_nadeint_at_index - adds a new node at an index
 * @head: double pointer to the list
 * @idx: the index
 * @n: integer added to new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;
	listint_t *aux;
	aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (aux != NULL)
	{
		if (i == idx)
		{
			temp = aux->next;
			aux->next = new;
			new->next = temp;
			break;
		}
		aux = aux->next;
		i++;
	}
	return (new);
}
