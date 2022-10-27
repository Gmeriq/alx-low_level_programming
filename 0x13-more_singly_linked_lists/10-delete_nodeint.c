#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @index: noede that's deleted
 *
 * Return: 1 0n success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *aux;
	if (head == NULL)
		return(0);
	temp = *head;
	/*if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}*/
	while (temp)
	{
		if (i == index)
		{
			aux = temp;
			temp = temp->next;
			free(aux);
			break;
		}
		temp = temp->next;
		i++;
	}
	return (1);
}
