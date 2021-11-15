#include "lists.h"
/**
* sum_listint - sum n of a listint_t list
* @head: pointer to the head of the list
* Return: sum all of all nodes or 0
**/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
