#include "sort.h"
/*
* 88 88b 88 .dP"Y8 888888 88""Yb 888888 88  dP"Yb  88b 88
* 88 88Yb88 `Ybo." 88__   88__dP   88   88 dP   Yb 88Yb88
* 88 88 Y88 o.`Y8b 88""   88"Yb    88   88 Yb   dP 88 Y88
* 88 88  Y8 8bodP' 888888 88  Yb   88   88  YbodP  88  Y8
*/

/**
 * insertion_sort_list - sort a doubly linked list of integer
 * in ascending order
 * @list: pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	long int i = 0, j = 0;
	listint_t *swap = NULL, *current = NULL;

	current = malloc(sizeof(listint_t));
	current = list;

	while (current != NULL)
	{
		printf("current: %d", current->n);
		/* step to move forward */
		current->next;
	}
