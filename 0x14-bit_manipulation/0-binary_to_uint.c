#include "main.h"


/**
 *  * binary_to_unit - to convert binary nos to an unsigned int
 *   * @b: binary numbers
 *    * Return: Always (0) for unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, c;
	int base_two;

	if (!b)
		return (0);


	for (base_two = 0; b[base_two]; base_two++)
		;
	base_two--;
	for (c = 1, a = 0; base_two >= 0; base_two--)
	{
		if (b[base_two] == '0')
		{
			c *= 2;
			continue;
		}
		else if (b[base_two] == '1')
		{
			a += y;
			c *= 2;
			continue;
		}
		return (0);
	}
	return (a);
}
