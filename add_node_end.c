#include "main.h"
/**
 * add_node_end - fonction
 * @head: param
 * @str: param
 * Return: new
 */
listpath_t *add_node_end(listpath_t **head, char *str)
{
	listpath_t *new, *last;

	new = malloc(sizeof(listpath_t));

	if (new == NULL)
		return (0);

	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
