#include "lists.h"

/**
 *  * print_listint - prints all the elements of a linked list
 *   * @p: linked list of type listint_t to print.
 *    *
 *     * Return: number of nodes
 */


size_t print_listint(const listint_t *p)
{
	int a;

	for (a = 0; p; p = (*p).next, a++)
		printf("%d\n", (*p).n);

	return (a);
}
