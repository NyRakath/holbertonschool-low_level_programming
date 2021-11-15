#include "lists.h"
/**
* add_nodeint - function that adds a new node at the beginning of listint
* @head: pointer to pointer to listint_t list
* @n: int to add in a node
* Return: the address of the new element, or NULL if it failed
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	/* head to new node*/
	*head = new;
	return (new);
}
