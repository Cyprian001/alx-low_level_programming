#include "main.h"


/**
 *   * flip_bits - funt that count bits
 *     *  flip to get from one num to another
 *       * @n: first num
 *         * @m: second num
 *           * Return: num of flips to get from one num to the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, check;

	check = (n ^ m);
	while (check)
	{
		count += (check & 1);
		check >>= 1;
	}
	return (count);



}
