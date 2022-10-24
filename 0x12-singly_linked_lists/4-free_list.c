#include "lists.h"
/**
 * free_list - This function frees a list_t list
 * @head: The list to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
