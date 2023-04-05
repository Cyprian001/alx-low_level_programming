#include "lists.h"
#include <stdlib.h>

/**
 *  * add_nodeint_end - add node to the end
 *   * @head: pointer to the start of the linked list
 *    * @n: value to add to node
 *     * @x: new
 *      * @y: last
 *       * Return: the address of the new element
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b;

	if (!head)
		return (NULL);

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);
	(*a).n = n;
	(*a).next = NULL;


	if (head && !*head)
	{
		*head = a;
		return (a);
	}


	for (b = *head; (*b).next; b = (*b).next)
		;

	(*b).next = a;

	return (a);
}
