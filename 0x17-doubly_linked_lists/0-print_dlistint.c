#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dListint - prints all the elements of a dListint_t list.
 * @h: doubly linked list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i += 1;
		h = h->next;
	}
	return (i);
}
