#include "lists.h"
/**
 * sum_listint - cal the sum of all elements
 * @head: 1st node in linked list
 * Return: sum of elements or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
