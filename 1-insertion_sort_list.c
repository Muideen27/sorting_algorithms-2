#include "sort.h"
/*
* 88 88b 88 .dP"Y8 888888 88""Yb 888888 88  dP"Yb  88b 88
* 88 88Yb88 `Ybo." 88__   88__dP   88   88 dP   Yb 88Yb88
* 88 88 Y88 o.`Y8b 88""   88"Yb    88   88 Yb   dP 88 Y88
* 88 88  Y8 8bodP' 888888 88  Yb   88   88  YbodP  88  Y8
*/
void swap_dll(listint_t *current, listint_t *insertion, listint_t **head);
/**
 * insertion_sort_list - sort a doubly linked list of integer
 * in ascending order
 * @list: pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *insertion = NULL, *head = NULL;

	current = (*list)->next;
	head = *list;

	if (list == NULL || *list == NULL)
		return;

	while (current != NULL)
	{	/* start in head every loop until find current */
		insertion = head; /* insertion pointer */
		/* compare current value with insertion point */
		/* iterates trowgh find current o swap conditional */
		while (insertion != current)
		{
			if (insertion->n > current->n)
			{
				/* swap links between nodes */
				swap_dll(current, insertion, list);
				/* move forward current */
				current = current->next;
			}
			insertion = insertion->next;
		}
		current = current->next;
	}
}
/**
 * swap_dll - swap two values in a doubly linked list
 * @current: current node been evaluated for insertion sort
 * @insertion: insertion point where move `current` node
 * @head: head pointer to the list
 */
void swap_dll(listint_t *current, listint_t *insertion, listint_t **head)
{
	listint_t *swap1 = current->next;
	listint_t *swap2 = insertion->prev;

	if (swap1 != NULL)
		swap1->prev = insertion;
	if (swap2 != NULL)
		swap2->next = current;
	current->prev = swap2;
	insertion->next = swap1;
	current->next = insertion;
	insertion->prev = current;
	if (*head == insertion)
		*head = current;
	print_list(*head);
}
