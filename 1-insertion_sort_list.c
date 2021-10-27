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
	listint_t *head, *insert;

	if (list == NULL || *list == NULL)
		return;
	head = (*list)->next;
	while (head != NULL)
	{
		insert = head->next;
		while (head->prev != NULL && head->prev->n > head->n)
		{
			head->prev->next = head->next;
			if (head->next != NULL)
				head->next->prev = head->prev;
			head->next = head->prev;
			head->prev = head->next->prev;
			head->next->prev = head;
			if (head->prev == NULL)
				*list = head;
			else
				head->prev->next = head;
			print_list(*list);
		}
		head = insert;
	}
}
