#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a linked
 * listint_t list
 * @h: The list to print
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * add_nodeint - This function adds a new node at the beginning
 * of a listint_t list
 * @head: The listint_t list
 * @n: The integer element inside the listint_t list
 * Return: The address of the new element, or NULL for failure
 */

listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * insert_nodeint_at_index - adds a new node at an index
 * @head: double pointer to the list
 * @idx: the index
 * @n: integer added to new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/**
	 * algorithm:
	 * maintain a count and loop through all the elements in the list
	 * to help keep track of the index.
	 * once you reach the node, where you have to insert the new node
	 * 	~ create the new node
	 * 	~ point the next pointer of the prev node to new node
	 *	~ point the next pointer of the new node to current node
	 */

	unsigned int i;
	listint_t *new, *prev, *current;

	if (*head == NULL)
		return (NULL);

	current = *head;

	if (idx > listint_len(*head) || idx <= 0)
		return (NULL);
	else
	{
		if (idx == 1)
		{
			new = add_nodeint(head, n);
			return (new);
		}
		else
		{
			for (i = 1; i < idx; i++)
			{
				prev = current;
				current = current->next;
			}
		new = malloc(sizeof(listint_t));
		new->n = n;
		prev->next = new;
		new->next = current;
	}
	return (new);
}
